modded class Pot
{
  override bool CanPutInCargo( EntityAI parent )
	{
		if (GetQuantity() > 100 && parent.GetHierarchyRootPlayer())
    { // if you have more than 100ml of liquid and we are trying to put into an item attached to a player
      return false; // dont attach
    }
		return super.CanPutInCargo(parent);
	}
};

modded class PortableGasStove
{
  override bool CanPutInCargo(EntityAI parent)
	{
    if (GetCookingEquipment())
    { // if you have more than 100ml of liquid and we are trying to put into an item attached to a player
      if (GetCookingEquipment().GetQuantity() > 100 && parent.GetHierarchyRootPlayer())
      {
        return false;
      }
    }
    return super.CanPutInCargo(parent);
	}
};