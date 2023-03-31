modded class AreaExposureMdfr
{
  protected float buffInterval = 0;

  override void OnTick(PlayerBase player, float deltaT)
	{
    // Print("AreaExposureMdfr::OnTick::Start");
    if (player && player.SRPIgnoreContaminatedArea())
    {
      // Print("OnTick::Mutant: return from activation");
      if (player.IsPlayerMutant())
      {
        player.GetStatEnergy().Add( ( PlayerConstants.DIGESTION_SPEED * deltaT ) + 0.2);
        player.GetStatWater().Add( ( PlayerConstants.DIGESTION_SPEED * deltaT ) + 0.2);
      }
      else if (player.IsAlpha() || player.IsQueenAlpha())
      {        
        buffInterval += deltaT;
        if (buffInterval > 10)
        {
          player.GetStatEnergy().Add(500);
          player.GetStatWater().Add(500);
          player.GetStatTiredness().Add(500);
          player.AddHealth("","Blood", 200);
          player.AddHealth("","", 200);
          player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx(NULL);
          player.RemoveAllAgents();
          if( !player.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE ) )
          {
            player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_EPINEPHRINE );
          }
          buffInterval = 0;
        }
      }
      return;
    }
    else
    {
      // Print("call super");
      super.OnTick(player, deltaT);
    }  
  }
}