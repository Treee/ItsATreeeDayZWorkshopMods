class SRP_BeerBottle extends Bottle_Base
{
  override bool HasAlcoholEffect()
  {
    return true;
  }
  override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionFillFuel);
		RemoveAction(ActionFillCoolant);
		RemoveAction(ActionFillGeneratorTank);
		RemoveAction(ActionWaterGardenSlot);
		RemoveAction(ActionWaterPlant);
		RemoveAction(ActionExtinguishFireplaceByLiquid);
		RemoveAction(ActionFillBottleBase);
		// RemoveAction(ActionDrink);
		// RemoveAction(ActionForceDrink);

		// AddAction(ActionDrainLiquid);
		// AddAction(ActionPourLiquid);
		// AddAction(ActionEmptyBottleBase);
		// AddAction(ActionWashHandsItem);
	}
};

class SRP_BeerBottle_DoublTap extends SRP_BeerBottle
{
  override bool HasAlcoholEffect()
  {
    return false;
  }
  override bool HasAntibioticEffect()
  {
    return true;
  }
};
class SRP_BeerBottle_Electric extends SRP_BeerBottle
{
  override bool HasAlcoholEffect()
  {
    return false;
  }
  override bool HasBloodRegenEffect()
  {
    return true;
  }
  override int GetBloodRegenEffectTotal()
  {
    return 10;
  }
};
class SRP_BeerBottle_Juggernaut extends SRP_BeerBottle
{
  override bool HasAlcoholEffect()
  {
    return false;
  }
  override bool HasShockRegenEffect()
  {
    return true;
  }
  override int GetShockRegenEffectTotal()
  {
    return 10;
  }
};
class SRP_BeerBottle_Reviver extends SRP_BeerBottle
{
  override bool HasAlcoholEffect()
  {
    return false;
  }
  override bool HasHealthRegenEffect()
  {
    return true;
  }
  override int GetHealthRegenEffectTotal()
  {
    return 10;
  }
};
class SRP_BeerBottle_Speedy extends SRP_BeerBottle
{
  override bool HasAlcoholEffect()
  {
    return false;
  }
  override bool HasEpinephrineEffect()
  {
    return true;
  }
};
