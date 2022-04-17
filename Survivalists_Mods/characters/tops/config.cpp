class CfgPatches
{
	class Survivalists_Mods_Characters_Tops
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Tops",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class Hoodie_ColorBase;

  // Remove eventually once Lore dictates
  class SaltyCougar_Armband;
  class Skylar_BioZone_Protection: SaltyCougar_Armband
	{
		scope=2;
		displayName="The Queen's Shawl";
		descriptionShort="Ignore biohzard effects";
    class Protection
    {
      biological=6;
    };
	};

  //----------------------------------- BASE GAME OVERRIDE
  class NBCJacketBase: Clothing
	{
		heatIsolation=0.80000001;
		absorbency=0;
		repairableWithKits[]={5,6}; // duct tape and tire repair kit
		class Protection 
    {
      biological=1;
    };
	};
  class M65Jacket_ColorBase: Clothing
	{
		itemsCargoSize[]={8,6};
  };

  class GorkaEJacket_ColorBase: Clothing
	{
    itemsCargoSize[]={8,5};
		heatIsolation=0.80000001;
  };

  class TacticalShirt_ColorBase: Clothing
	{
    itemsCargoSize[]={7,5};
  };

  class NurseDress_ColorBase: Clothing
  {
    heatIsolation=0.80000001;
  };

  class Armband_ColorBase: Clothing
	{
		hiddenSelections[] = {"zbytek", "leftarmroll", "rightarmroll"};
	};

  class MassArmbandDouble_Colorbase: Armband_ColorBase
	{
    hiddenSelections[] = {"zbytek", "leftarmroll", "rightarmroll"};
	};

  //===================== CUSTOM SHIRTS

  class SRP_PlatHoodie: Clothing
	{
    scope=2;
		displayName="Hoodie";
		descriptionShort="Espen Industries. A nicely sewed hoody with plenty of room inside.";
		model="Survivalists_Mods\characters\tops\srp_plathoodie_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=850;
		itemSize[]={3,3};
		itemsCargoSize[]={5,4};
		quickBarBonus=1;
		varWetMax=1;
		heatIsolation=0.8;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
    headSelectionsToHide[]=
		{
			"Clipping_BandanaHead",
			"Clipping_BandanaFace"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\srp_plathoodie_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1.0, {"Survivalists_Mods\characters\tops\data\srp_plathoodie.rvmat"}},
            {0.69999999, {"Survivalists_Mods\characters\tops\data\srp_plathoodie.rvmat"}},
            {0.5, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.30000001, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.0, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\tops\srp_plathoodie_m.p3d";
			female="Survivalists_Mods\characters\tops\srp_plathoodie_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_PlatHoodie_Wolfbeard: SRP_PlatHoodie
  {
    scope=2;
  };

  class SRP_Sweater_ColorBase: Clothing
	{
    scope=0;
		displayName="Turtleneck Sweater";
		descriptionShort="A loose fitting turtleneck sweater";
		model="Survivalists_Mods\characters\tops\SRP_Sweater_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		rotationFlags=64;
		weight=2000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=2;
		varWetMax=0.39;
		heatIsolation=0.90;
		repairableWithKits[]={3};
		repairCosts[]={25};
		soundAttType="LeatherJacket";
		hiddenSelections[]=
		{
			"zbytek",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\srp_Sweater_CO.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\tops\data\srp_sweater.rvmat"}},
						{0.7,{"Survivalists_Mods\characters\tops\data\srp_sweater.rvmat"}},
						{0.5,{"Survivalists_Mods\characters\tops\data\srp_sweater_damage.rvmat"}},
						{0.3,{"Survivalists_Mods\characters\tops\data\srp_sweater_damage.rvmat"}},
						{0.0,{"Survivalists_Mods\characters\tops\data\srp_sweater_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.69;
					};
					class Blood
					{
						damage=0.69;
					};
					class Shock
					{
						damage=0.85;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.71;
					};
					class Blood
					{
						damage=0.71;
					};
					class Shock
					{
						damage=0.85;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\tops\SRP_Sweater_m.p3d";
			female="Survivalists_Mods\characters\tops\SRP_Sweater_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};