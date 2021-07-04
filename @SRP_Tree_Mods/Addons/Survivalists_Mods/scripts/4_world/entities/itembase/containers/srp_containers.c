class SRP_Container_Base extends Container_Base
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}

  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
}
// if you add a new container, make sure you add it to this list so it gets the right stuff

class SRP_FridgeBig extends SRP_Container_Base{};
class SRP_GunShelf extends SRP_Container_Base{};
class SRP_WoodenShelf extends SRP_Container_Base{};
class SRP_PostBox extends SRP_Container_Base{};
class SRP_PostBoxBig extends SRP_Container_Base{};

class SRP_Furniture_WoodenTable extends SRP_Container_Base{};
class SRP_GChair extends SRP_Container_Base{};
class SRP_GChairHigh extends SRP_Container_Base{};
class SRP_GOutdoorTable extends SRP_Container_Base{};
class SRP_GOutdoorTableUmbrella extends SRP_Container_Base{};
class SRP_Umbrella extends SRP_Container_Base{};
class SRP_ShootingTargetO extends SRP_Container_Base{};
class SRP_AdvancedWorkbench extends SRP_Container_Base{};
class SRP_StreetLightLarge extends SRP_Container_Base{};
class SRP_StreetLightLarge_Metal extends SRP_Container_Base{};
class SRP_StreetLightMedium_Wood extends SRP_Container_Base{};
class SRP_StreetLightMedium extends SRP_Container_Base{};
class SRP_Carpet extends SRP_Container_Base{};
class SRP_CarpetRug extends SRP_Container_Base{};
class SRP_WoodenBox_Cask extends SRP_Container_Base {};

class SRP_MilitaryCase extends Barrel_ColorBase
{
	override void SetActions()
	{
		super.SetActions();
		RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);

		AddAction(ActionOpenBarrel);
		AddAction(ActionCloseBarrel);
	}
  
  override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
  
  override bool CanPutIntoHands (EntityAI parent)
  {
    return false;
  }
}

class SRP_Openable_Container extends Barrel_ColorBase
{
  protected override void UpdateVisualState()
	{
		if ( IsOpen() )
		{
			SetAnimationPhase("Lid",1);
			SetAnimationPhase("Lid2",0);
		}
		else
		{
			SetAnimationPhase("Lid",0);
			SetAnimationPhase("Lid2",1);
		}
	}

	override bool CanPutInCargo( EntityAI parent )
  {
    return false;
  }
    
  override bool CanPutIntoHands(EntityAI parent)
  {
    return false;
  }
};

class SRP_BedsideTable extends SRP_Openable_Container {};

class SRP_Potbelly_Stove extends SRP_Openable_Container
{
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTakeFireplaceFromBarrel);
    RemoveAction(ActionTakeItem);
    RemoveAction(ActionSwapItemToHands);
		RemoveAction(ActionTakeItemToHands);
	}
};

class SRP_WoodenBox_Locked extends SRP_Openable_Container
{
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};

class SRP_WoodenBox_Long extends SRP_Openable_Container
{
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};

class SRP_WoodenBox_Square extends SRP_Openable_Container
{
  override bool CanPutIntoHands(EntityAI parent)
  {
    return true;
  }
};

