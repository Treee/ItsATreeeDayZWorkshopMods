class SRP_Anvil_ColorBase extends SRP_CraftingBench_Base
{
  override bool CheckPotentialRecipeMatches(out array<SRP_CraftableItem> craftableItems)
  {        
    SRP_CraftableItem craftableItem = new SRP_CraftableItem("", "");
    EntityAI attachment;
    int totalSlots = GetInventory().AttachmentCount();
    int slotId;
    int quantity;
    string slotName;
    string colorName;
    int enumId = -1;
    
    for (int i = 0; i < totalSlots; i++)
    {
      // Print("Sending: index " + i + " with max " + totalSlots);
      if (Class.CastTo(attachment, GetInventory().GetAttachmentFromIndex(i)))
      {        
        attachment.GetInventory().GetCurrentAttachmentSlotInfo(slotId, slotName);
        colorName = attachment.ConfigGetString("color");
        colorName.ToUpper();
        
        enumId = EnumTools.StringToEnum(SRP_COLOR, colorName);
        // non null items with 0 quantity should be seen as 1
        quantity = Math.Max(1, attachment.GetQuantity());
        // Print(string.Format("item: %1 slot: %2 color: %3 enumId: %4 quantity: %5", attachment.GetType(), slotName, colorName, enumId, attachment.GetQuantity()));
        craftableItem.RegisterIngredient(new SRP_ItemRequirement(slotName, enumId, quantity));
      }
    }
    // craftableItem.PrintIngredients();    
    return GetDayZGame().GetSRPSmithingRecipesGlobal().IsRecipeMatch(craftableItem, craftableItems);
  }
  override int GetCraftingDamage()
  {
    return 10;
  }
  override bool CanBeDeconstructed()
  {
    return true;
  }
  override bool CanReceiveAttachment( EntityAI attachment,int slotId )
	{
    SRP_Mining_Crystal_ColorBase crystal;
		if (Class.CastTo(crystal, attachment))
      return false;
		return super.CanReceiveAttachment( attachment, slotId );
	};	
};

class SRP_Anvil_Basic_Kit extends SRP_KitBase{};
class SRP_Anvil_Basic extends SRP_Anvil_ColorBase{};
