modded class WoundAgent
{	
  static const float RESISTANCE_STAGE_1 = 0.75;
	static const float RESISTANCE_STAGE_2 = 0.95;

	override void Init()
	{
    super.Init();
		m_Invasibility 			= 0.012;//to reach 250 in 60 mins
		m_MaxCount 				= 5000; // 4 hours to get max infection
	}
};

modded class CholeraAgent
{
	override void Init()
	{
    super.Init();
		m_AntibioticsResistance = 0.9;
		m_MaxCount 				= 5000;
		m_Potency 				= EStatLevels.GREAT;
	}
};

modded class InfluenzaAgent
{
	override void Init()
	{		
		m_AntibioticsResistance = 0.9;
		m_MaxCount 				= 3000;
    m_Potency 				= EStatLevels.GREAT;
	}
};
modded class FoodPoisonAgent
{
	override void Init()
	{
    super.Init();
		m_AntibioticsResistance = 0.85;
		m_MaxCount 				= 1000;
		m_Potency 				= EStatLevels.MEDIUM;
	}
};