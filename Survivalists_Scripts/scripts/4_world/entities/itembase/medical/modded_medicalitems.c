// this is for vest pouch stuff
modded class BloodTestKit
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class Thermometer
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class BloodBagIV
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class BloodBagFull
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class BloodBagEmpty
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class SalineBagIV
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class StartKitIV
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class SalineBag
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class InjectionVial
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class BloodSyringe
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class ClearSyringe
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class Syringe
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class Epinephrine
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class AntiChemInjector
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class Morphine
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class TetracyclineAntibiotics
{
  override void EOnInit(IEntity other, int extra)
	{
    int randomAmount = Math.RandomIntInclusive(1, GetQuantityMax());
    SetQuantity(randomAmount);
	}
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class IodineTincture
{
  override bool IsMedicalItem()
  {
    return true;
  }
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDrainLiquid);
		AddAction(ActionPourLiquid);
	}
};
modded class VitaminBottle
{
  override void EOnInit(IEntity other, int extra)
	{
    int randomAmount = Math.RandomIntInclusive(1, 12);
    SetQuantity(randomAmount);
	}
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class PainkillerTablets
{
  override void EOnInit(IEntity other, int extra)
	{
    int randomAmount = Math.RandomIntInclusive(1, GetQuantityMax());
    SetQuantity(randomAmount);
	}
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class CharcoalTablets
{
  override void EOnInit(IEntity other, int extra)
	{
    int randomAmount = Math.RandomIntInclusive(1, GetQuantityMax());
    SetQuantity(randomAmount);
	}
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class PurificationTablets
{
  override void EOnInit(IEntity other, int extra)
	{
    int randomAmount = Math.RandomIntInclusive(1, GetQuantityMax());
    SetQuantity(randomAmount);
	}
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class DisinfectantAlcohol
{
  override bool IsMedicalItem()
  {
    return true;
  }
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDrainLiquid);
		AddAction(ActionPourLiquid);
	}
};
modded class DisinfectantSpray
{
  override bool IsMedicalItem()
  {
    return true;
  }
  override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDrainLiquid);
		AddAction(ActionPourLiquid);
	}
};
modded class BandageDressing
{
  override bool IsMedicalItem()
  {
    return true;
  }
};
modded class Rag
{
  override bool IsMedicalItem()
  {
    return true;
  }
};