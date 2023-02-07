modded class ActionUnpackGift
{	
  override void OnFinishProgressServer( ActionData action_data )
	{
    super.OnFinishProgressServer(action_data);
    
    ItemBase paper;
    if (Class.CastTo(paper, GetGame().CreateObjectEx("WrittenNote", action_data.m_Player.GetPosition(), ECE_PLACE_ON_SURFACE)))
    {
      PotentialTreasureLocation treasureSpot = GetDayZGame().GetDynamicTreasureHunt().GetRandomTreasureLocation();
      vector treasureLocation = treasureSpot.GetRandomPointInside();
      paper.GetWrittenNoteData().InitNoteInfo(null, paper);    
      paper.GetWrittenNoteData().SetNoteText(GetDayZGame().GetDynamicTreasureHunt().GetRandomTreasureHuntText(treasureSpot));

      Param1<string> text = new Param1<string>(paper.GetWrittenNoteData().GetNoteText());
      paper.RPCSingleParam(ERPCs.RPC_READ_NOTE, text, true, action_data.m_Player.GetIdentity());
      paper.AddHealth(-70);
      SendMessageToClient( action_data.m_Player, "A worn and torn piece of paper falls to the ground.");
      // SendMessageToClient( action_data.m_Player, string.Format("A worn and torn piece of paper falls to the ground. %1", treasureSpot.GetVectorPrettyString("X marks:", treasureLocation)));
      BuryTreasure(treasureLocation);
    }
	}

  void BuryTreasure(vector treasureLocation)
  {
    EntityAI containerToBury;
    if (Class.CastTo(containerToBury, GetGame().CreateObjectEx(GetDayZGame().GetDynamicTreasureHunt().GetRandomBuriableContainer(), treasureLocation, ECE_PLACE_ON_SURFACE)))
    {
      int maxItems = Math.RandomIntInclusive(3,8);
      int totalCount = GetDayZGame().GetDynamicTreasureHunt().GetRandomTreasureItems().Count();
      EntityAI entity;
      ItemBase treasureItem;
      string newItem;
      for (int i = 0; i < maxItems; i ++)
      {
        newItem = GetDayZGame().GetDynamicTreasureHunt().GetRandomTreasureItem();         
        entity = containerToBury.GetInventory().CreateInInventory(GetDayZGame().GetDynamicTreasureHunt().GetRandomTreasureItem());
        if (Class.CastTo(treasureItem, entity))
        {
          if (treasureItem.HasQuantity())
          {
            int half = treasureItem.GetQuantityMax() / 2;
            treasureItem.SetQuantity(Math.RandomIntInclusive(half, treasureItem.GetQuantityMax()));
          }
        }        
      }
      ItemBase rewardNote = ItemBase.Cast(containerToBury.GetInventory().CreateInInventory("WrittenNote"));
      rewardNote.GetWrittenNoteData().InitNoteInfo(null, rewardNote);    
      rewardNote.GetWrittenNoteData().SetNoteText(GetDayZGame().GetDynamicTreasureHunt().GetRandomTreasureHuntRewardText());
      rewardNote.AddHealth(-70);
      
      InventoryLocation targetIL = new InventoryLocation();
      if (!containerToBury.GetInventory().GetCurrentInventoryLocation(targetIL))
      {
        ErrorEx("Cannot get inventory location of entity=" + containerToBury);
        return;
      }
      UndergroundStash stash = UndergroundStash.Cast(GetGame().CreateObjectEx("UndergroundStash", treasureLocation, ECE_PLACE_ON_SURFACE));  
      if (stash)
      {
        stash.PlaceOnGround();
        if (GameInventory.LocationCanRemoveEntity(targetIL))
        {
          containerToBury.ServerTakeEntityToTargetCargo(stash, containerToBury);
        }
        else
        {
          Debug.Log(string.Format("Cannot remove entity=%1 obj from current location=%2", containerToBury, InventoryLocation.DumpToStringNullSafe(targetIL)));
        }
      }
      else
      {
        ErrorEx("Stash not spawned!");
      }
    }
  }
};
