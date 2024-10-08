class SRP_ForgeIngotPlate_ColorBase extends ItemBase
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}  
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override bool IsSmeltable()
  {
    return true;
  }
  // 2 ingots = 1-5 plates 10 in a stack
  // best case a stack gives 2 ingots
  override string GetSmeltableOutput(string forceOverride="")
  {    
    return ConvertIntoIngotString();
  }

  override int GetSmeltableYield()
  {
    return Math.RandomIntInclusive(0,1);
  }

  string ConvertIntoIngotString()
  {
    return string.Format("SRP_ForgeIngot_%1", ConfigGetString("color"));
  }
};
class SRP_ForgeIngotPlate_Copper extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Tin extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Bronze extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Iron extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Gold extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Platinum extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Silver extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Zinc extends SRP_ForgeIngotPlate_ColorBase{};
class SRP_ForgeIngotPlate_Brass extends SRP_ForgeIngotPlate_ColorBase{};

class SRP_ForgeIngotRod_ColorBase extends ItemBase
{
  override protected bool CanHaveTemperature()
	{
		// return true used on selected items that have a temperature effect
		return true;
	}
  
  override void OnInventoryEnter(Man player)
  {
    super.OnInventoryEnter(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB.GetItemInHands() == this)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override void OnInventoryExit(Man player)
  {
    super.OnInventoryExit(player);
    PlayerBase player_PB = PlayerBase.Cast( player );
    if (player_PB)
    {
      if (GetTemperature() > 80)
      {
        if( player_PB.GetModifiersManager().IsModifierActive(SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING ) )//effectively resets the timer
        {
          player_PB.GetModifiersManager().DeactivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING, false );
        }
        player_PB.GetModifiersManager().ActivateModifier( SRP_MasonMetallurgy_eModifiers.MDF_SRPBURNING );
      }
    }
  }
  override string GetSmeltableOutput(string forceOverride="")
  {    
    return ConvertIntoIngotString();
  }
  override bool IsSmeltable()
  {
    return true;
  }
  // 2 ingots = 1-2 rods
  override int GetSmeltableYield()
  {
    return Math.RandomIntInclusive(0,1);
  }

  string ConvertIntoIngotString()
  {
    return string.Format("SRP_ForgeIngot_%1", ConfigGetString("color"));
  }
};
class SRP_ForgeIngotRod_Copper extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Tin extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Bronze extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Iron extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Gold extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Platinum extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Silver extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Zinc extends SRP_ForgeIngotRod_ColorBase{};
class SRP_ForgeIngotRod_Brass extends SRP_ForgeIngotRod_ColorBase{};
