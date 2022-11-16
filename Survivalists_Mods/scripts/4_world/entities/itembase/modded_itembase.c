modded class ItemBase
{ 
  protected int m_HeatCounter = 0;  

  override void OnWasAttached( EntityAI parent, int slot_id )
	{
		super.OnWasAttached(parent, slot_id);
    // Print("OnWasAttached");
    if (IsSprintRemoved())
    {
      PlayerBase player = PlayerBase.Cast(parent);
  		if (player)
      {
        player.SetIsSprintDisabledByHeavyItemEquipped(true);
      }
    }    
	}
	override void OnWasDetached( EntityAI parent, int slot_id )
	{
		super.OnWasDetached(parent, slot_id);
    // Print("OnWasDetached");
    if (IsSprintRemoved())
    {
      PlayerBase player = PlayerBase.Cast(parent);
  		if (player)
      {
        player.SetIsSprintDisabledByHeavyItemEquipped(false);
      }
    }
	}
  override void OnInventoryEnter(Man player)
	{
    super.OnInventoryEnter(player);
    PlayerBase playerPB;
    ItemBase itemInHands;
    if (Class.CastTo(itemInHands, player.GetHumanInventory().GetEntityInHands()))
    {
      // Print("OnInventoryEnter item cast: " + item);
      if (itemInHands.IsContainerFilledToRemoveSprint(80))
      {
        playerPB = PlayerBase.Cast(player);
        // Print("OnInventoryEnter container is filled above max and player cast: " + playerPB);
        if (playerPB)
        {
          if (!playerPB.IsSprintDisabledByHeavyItemInHands())
          {
            // Print("OnInventoryEnter: sprint is not disabled so disable it");
            playerPB.SetIsSprintDisabledByHeavyItemInHands(true);            
          }
        }      
      }
    }
    if (HasRadioactiveEffect())
    {
      if (GetGame().IsDedicatedServer() && playerPB && !playerPB.SRPIgnoreContaminatedArea())
      {
        if (playerPB.GetSingleAgentCount(eAgents.CHEMICAL_POISON) < 300)
        {
          playerPB.InsertAgent(eAgents.CHEMICAL_POISON, 65);
        }
      }
    }
	}
	override void OnInventoryExit(Man player)
	{
    PlayerBase playerPB;
    ItemBase itemInHands;
    EntityAI owner = GetHierarchyParent();
    if (Class.CastTo(itemInHands, player.GetHumanInventory().GetEntityInHands()) && !owner)
    {
      // Print("OnInventoryExit item cast: " + item);
      if (!itemInHands.IsContainerFilledToRemoveSprint(80))
      {
        playerPB = PlayerBase.Cast(player);
        // Print("OnInventoryExit container is not filled above max and player cast: " + playerPB);
        if (playerPB)
        {
          if (playerPB.IsSprintDisabledByHeavyItemInHands())
          {
            // Print("OnInventoryExit: sprint is disabled so disable it");
            playerPB.SetIsSprintDisabledByHeavyItemInHands(false);            
          }
        }      
      }      
    }
    super.OnInventoryExit(player);
	}
  override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);

		if (IsPlacingKit() && GetGame().IsDedicatedServer())
		{
      PlayerBase playerPB = PlayerBase.Cast(player);
      if (player)
      {
        // Print("Placing object: " + GetKitItemName());
        TurnItemIntoItemLambda_KitDeployment lambda = new TurnItemIntoItemLambda_KitDeployment(this, GetKitItemName(), playerPB, position, orientation);
        lambda.SetTransferParams(false, false);
        MiscGameplayFunctions.TurnItemIntoItemEx(playerPB, lambda);
      }
		}
	}

  // make sure to use the slot name not the item name....
	ItemBase GetItemOnSlot(string slot_type)
	{
		int slot_id = InventorySlots.GetSlotIdFromString( slot_type );
		EntityAI item_EAI = GetInventory().FindAttachment( slot_id );
		ItemBase item_IB = ItemBase.Cast(item_EAI);
		
		if (item_EAI && !item_IB)
		{
			string str = "Warning! GetItemOnSlot() >> found item on slot " + slot_type + " can't be cast to ItemBase! Found item is " + item_EAI.GetType() + " and the player is " + GetType() + "!";
			Error(str);
			return null;
		}
		return item_IB;
	}

//===================================== STATUS EFFECT BOOLS
  bool HasAlcoholEffect()
  {
    return false;
  }
  float GetAlcoholAmount()
  {
    return 0.0;
  }
  bool HasEpinephrineEffect()
  {
    return false;
  }
  bool HasRadioactiveEffect()
  {
    return false;
  }
  bool HasCharcoalEffect()
  {
    return false;
  }
  bool IsBloodDrink()
  {
    return false;
  }
  bool HasAntibioticEffect()
  {
    return false;
  }
  bool HasHealthRegenEffect()
  {
    return false;
  }
  int GetHealthRegenEffectTotal()
  {
    return 0;
  }
  bool HasShockRegenEffect()
  {
    return false;
  }
  int GetShockRegenEffectTotal()
  {
    return 0;
  }
  bool HasBloodRegenEffect()
  {
    return false;
  }
  int GetBloodRegenEffectTotal()
  {
    return 0;
  }
//====================================== CRAFTING
  bool IsAlchemyReagent()
  {
    return false;
  }
  bool IsPlacingKit()
  {
    return false;
  }
  bool IsCraftingKit()
  {
    return false;
  }
  bool CanBeDeconstructed()
  {
    return false;
  }
  bool HasCorrectQuantityAndType(int quantity, string acceptedType, bool exactAmount=false)
  {
    if (exactAmount)
    {
      return GetQuantity() == quantity && acceptedType == GetColor();
    }
    if (acceptedType == "")
    {
      return GetQuantity() >= quantity;
    }
    return GetQuantity() >= quantity && acceptedType == GetColor();
  }
  string GetKitName()
  {
    return string.Format("%1_Kit", GetType());
  }
  string GetKitItemName()
  {
    return string.Format("%1", GetType().Substring(0, GetType().Length() - 4));
  }
  string GetCraftingKitName()
  {
    return "";
  }
//========================================= SPRINTING BOOLS
  bool IsSprintRemoved()
  {
    return false;
  }
  bool IsContainerFilledToRemoveSprint(int maxCargo=80)
  {
    // Print("IsContainerFilledToRemoveSprint: maxCargo: " + maxCargo);
    if (HasAnyCargo()) // if the item exists and has cargo
    {
      CargoBase cargoItem = GetInventory().GetCargo();
      int currentWeight = 0;
      int maxWeight = cargoItem.GetWidth() * cargoItem.GetHeight(); // x,y    
      // Print("has cargo with this size: " + maxWeight);
      if (maxWeight >= maxCargo)  
      {
        for ( int i = 0; i < cargoItem.GetItemCount(); ++i )
        {
          int x, y;
          cargoItem.GetItemSize( i, x, y );
          currentWeight += x * y;
        }
        float percentFilled = 1-((maxWeight-currentWeight)/maxWeight);
        // Print("Percent filled: " + percentFilled);
        return percentFilled >= GetPercentWeightToRemoveSprint();          
      }
    }
    return false;
  }  
  float GetPercentWeightToRemoveSprint()
  {
    return 0.45;
  }
//========================================= HEAT BASED CRAFTABLES  
  bool IsSmeltable()
  {
    return false;
  }
  bool IsForgeHardened()
  {
    return false;
  }
  bool IsTransformedByHeat()
  {
    return false;
  }
  void IncrementHeatTimer(int increment = 1)
  {
    m_HeatCounter += increment;
  }
  void ResetHeatTimer()
  {
    m_HeatCounter = 0;
  }
  int GetHeatTimer()
  {
    return m_HeatCounter;
  }
  int GetHeatTimerThreshold()
  {
    return -1;
  }
  void HandleHeatTransformation()
  {
    // Print("Item is max heat and can transform: " + GetType());    
  }
  bool IsHotEnough(int expectedTemperature)
  {
    return (GetTemperature() >= expectedTemperature);
  }
  TStringArray GetSmeltableOptions()
  {
    return {};
  }
  string GetSmeltableOutput(string forceOverride="")
  {    
    if (forceOverride != "")
      return forceOverride;
    return GetSmeltableOptions().GetRandomElement();
  }
  int GetSmeltableYield()
  {
    return 0;
  }
//========================================= ELECTRONICS BASED CRAFTABLES
  string GetColor()
  {
    return ConfigGetString("color");
  }
  int GetResistorDigit()
  {
    return -1;
  }
  int GetResistorMultiplier()
  {
    return 0;
  }
  float GetResistorTolerance()
  {
    return 0;
  }
  int GetResistorTemperaturCoeffcient()
  {
    return 0;
  }

};
