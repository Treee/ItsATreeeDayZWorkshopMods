class SRP_StimPackInjector_Base extends ItemBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionInjectEpinephrineTarget);
		AddAction(ActionInjectEpinephrineSelf);
	}

  override void OnApply(PlayerBase player)
	{
		if (!player)
			return;

    player.SetHealth("RightLeg", "", 100);
		player.SetHealth("RightFoot", "", 100);
		player.SetHealth("LeftLeg", "", 100);
		player.SetHealth("LeftFoot", "", 100);
    player.AddHealth("", "Blood", 500);
    player.AddHealth("", "", 75); //do 35 dmg
    player.GetStatEnergy().Add(1500);
    player.GetStatWater().Add(1500);
		if( player.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )//effectively resets the timer
		{
			player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
		}
		player.GetModifiersManager().ActivateModifier( eModifiers.MDF_EPINEPHRINE );
	}
};


class SRP_StimPackInjector_Espen extends SRP_StimPackInjector_Base{};
class SRP_StimPackInjector_Stag extends SRP_StimPackInjector_Base{};
