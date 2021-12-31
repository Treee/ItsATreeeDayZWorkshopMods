class CfgPatches
{
	class Survivalists_Retextures_Characters_Belts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Belts",
			"Survivalists_Retextures"
		};
	};
};
class CfgVehicles
{
  class SRP_Elbow_Knee_Pads_Green;
  class SRP_Military_Belt_Tan;
  class SRP_Knife_Sheath_Tan;
  class SRP_TacticalBelt;
  class SRP_Car_WoodenDerby;

  //======================== MAIN MOD RETEXTURES
  class SRP_Elbow_Knee_Pads_Tan : SRP_Elbow_Knee_Pads_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\Pads_Tan_CO.paa"
		};	
	};
	class SRP_Elbow_Knee_Pads_Black : SRP_Elbow_Knee_Pads_Green
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\Pads_Black_CO.paa"
		};	
	};

  class SRP_Military_Belt_Green: SRP_Military_Belt_Tan
	{ 
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\Military_Belt_Green_CO.paa"
		};	
	};
	class SRP_Military_Belt_Black: SRP_Military_Belt_Tan
	{ 
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\Military_Belt_Black_CO.paa"
		};	
	};

	class SRP_Knife_Sheath_Green: SRP_Knife_Sheath_Tan
	{
		scope=2;
    displayName = "Knife Sheath - Green";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\Sheath_Green_CO.paa"
		};	
	};
	class SRP_Knife_Sheath_Black: SRP_Knife_Sheath_Tan
	{
		scope=2;
    displayName = "Knife Sheath - Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\Sheath_Black_CO.paa"
		};	
	};

  class SRP_TacticalBelt_Green: SRP_TacticalBelt
	{
		scope=2;
    displayName = "Knife Sheath - Green";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\tacticalbelt_Green_co.paa"
		};	
	};
	class SRP_TacticalBelt_Black: SRP_TacticalBelt
	{
		scope=2;
    displayName = "Knife Sheath - Black";
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\tacticalbelt_Black_co.paa"
		};	
	};


  class SRP_Car_WoodenDerby_Illusive: SRP_Car_WoodenDerby
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek",
      "personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Retextures\characters\belts\data\srp_woodencar_illusive_co.paa"
		};	
	};
};