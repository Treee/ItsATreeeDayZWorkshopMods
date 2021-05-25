class SRP_StonedMdfr: ModifierBase
{
	const int LIFETIME = 150;
  
  float m_stoned = 60;
  float m_stonedMax = 90;
  float m_stonedMin = 60;
  float m_stonedIntensity = 0.05;

  float m_radial = 0;
  float m_radialMax = 4;
  float m_radialMin = 0;
  float m_radialIntensity = 0.05;
	
	override void Init()
	{
		m_TrackActivatedTime = true;
		m_IsPersistent = true;
		m_ID 					= SRP_eModifiers.MDF_STONED;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_INACTIVE_LONG;
	}

	override bool ActivateCondition(PlayerBase player)
	{
		return false;
	}
	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override string GetDebugText()
	{
		return (LIFETIME - GetAttachedTime()).ToString();
	}
	
	override void OnActivate(PlayerBase player)
	{
    Print("SRP_StonedMdfr:: OnActivate");
	}
	
	override void OnDeactivate(PlayerBase player)
	{
    // Print("Player is not stoned");
    Param2<float, float> m_modifierValues = new Param2<float, float>(60, 0);
    GetGame().RPCSingleParam(player, SRP_ERPCs.RPC_DRUGS_WEED, m_modifierValues, true, player.GetIdentity());    
	}
	
	override bool DeactivateCondition(PlayerBase player)
	{
		float attached_time = GetAttachedTime();
		
		if( attached_time >= LIFETIME )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	override void OnTick(PlayerBase player, float deltaT)
	{
    if (m_stoned > m_stonedMax) {
      m_stonedIntensity *= -1;
    } else if (m_stoned < m_stonedMin) {
      m_stonedIntensity *= -1;
    }
    m_stoned += (m_stonedIntensity * deltaT);

    if (m_radial > m_radialMax) {
      m_radialIntensity *= -1;
    } else if (m_radial < m_radialMin) {
      m_radialIntensity *= -1;
    }
    m_radial += (m_radialIntensity * deltaT);

    Param2<float, float> m_modifierValues = new Param2<float, float>(m_stoned, m_radial);
    GetGame().RPCSingleParam(player, SRP_ERPCs.RPC_DRUGS_WEED, m_modifierValues, false, player.GetIdentity());    
	}	
};