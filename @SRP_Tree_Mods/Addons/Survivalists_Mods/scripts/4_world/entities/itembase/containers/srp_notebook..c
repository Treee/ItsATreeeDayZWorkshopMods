class SRP_Notebook extends Inventory_Base
{
	override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		if ( item.IsKindOf("Paper"))
		{
			return true;
		};
		if ( item.IsKindOf("WrittenNote"))
		{
			return true;
		}
    if ( item.IsKindOf("SRP_ConsumableDrug_SmileyAcid"))
		{
			return true;
		}
    if ( item.IsKindOf("SRP_ConsumableDrug_SmileyAcidTainted"))
		{
			return true;
		}
    if ( item.IsKindOf("SRP_ConsumableDrug_SkullAcid"))
		{
			return true;
		}
    if ( item.IsKindOf("SRP_ConsumableDrug_SkullAcidTainted"))
		{
			return true;
		}
		return false;
	}
};