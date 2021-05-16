class SRP_Smokable_ColorBase extends Edible_Base {
	Particle 				m_SmokeParticle;
	vector 					m_ParticleLocalPos = Vector(0, 0.11, 0);
  bool            m_isLit = false;

	void SRP_Smokable_ColorBase(){}

	void ~SRP_Smokable_ColorBase()
	{
		ExtinguishSmokable();
	}

	void ExtinguishSmokable()
	{
		if (m_SmokeParticle)
		{
			m_SmokeParticle.Stop();
      m_isLit = false;
		}
	}

  void LightSmokable() {
    if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // client side
    {
      m_SmokeParticle = Particle.PlayOnObject(ParticleList.CAMP_NORMAL_SMOKE, this, m_ParticleLocalPos, Vector(0,0,0), true);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.01);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.01);
      m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY_RND, 0.01);
      m_isLit = true;
    }	
  }

  bool IsLit() {
    return m_isLit;
  }

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionExtinguishSmokeSRPSmokableSelf);
		AddAction(ActionSmokeSRPSmokableSelf);
		AddAction(ActionForceSmokeSRPSmokable);
	}
};

class SRP_SmokingPipe extends SRP_Smokable_ColorBase {};

class SRP_Smokable_Cigarette extends SRP_Smokable_ColorBase {
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_TOBACCO ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TOBACCO );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_TOBACCO );
	}
};
class SRP_Smokable_Cigar extends SRP_Smokable_Cigarette { };

class SRP_Smokable_ZWeed extends SRP_Smokable_ColorBase {
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_STONED ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_STONED );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_STONED );
	}
};
class SRP_Smokable_Test extends SRP_Smokable_ColorBase {
  override void OnConsume(float amount, PlayerBase consumer)
	{				
		if( consumer.GetModifiersManager().IsModifierActive(SRP_eModifiers.MDF_TEST ) )
		{
			consumer.GetModifiersManager().DeactivateModifier( SRP_eModifiers.MDF_TEST );
		}
		consumer.GetModifiersManager().ActivateModifier( SRP_eModifiers.MDF_TEST );
	}
};
