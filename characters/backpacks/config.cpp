class CfgPatches
{
	class Survivalists_Mods_Characters_Backpacks
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
			"DZ_Characters",
      "DZ_Characters_Backpacks",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Container_Base;
  class HuntingBag;
  class AliceBag_ColorBase;

  //--------------------------------- MOD OVERRIDE
	class MassNBC_Bag: Container_Base
	{
		scope=2;
		displayName="NBC Bag";
		descriptionShort="A yellow bag meant to contain the NBC set, Gas mask not included. 'Mass' Thanks to BaconAndDoritos for his quick maffs";
		itemsize[]={6,6};
		itemsCargoSize[]={9,6}; // increase to account for gas mask
		Model="MassTextures\bag\medbag\cannister.p3d";
		inventorySlot[]=
		{
			"NBC"
		};
		weight=75;
		allowOwnedCargoManipulation=1;
	};


  //--------------------------------- CUSTOM STUFF

  class SRP_LeatherBackpack_Default: HuntingBag  // BP_Huntbackpack
	{
		scope=2;
		model="Survivalists_Mods\characters\backpacks\leatherbackpack_g.p3d";
		itemsCargoSize[]={8,8};
		attachments[]=
		{
			"carman1",
			"BPAxe",
			"Belt_Back",
			"carman2"
		};
    hiddenSelections[]=
		{
			"zbytek",
      "cloth",
      "pouches",
      "straps"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_base_co.paa",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth_co.paa",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches_co.paa",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps_co.paa"
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack.rvmat",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth.rvmat",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches.rvmat",
			"Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps.rvmat"
    };
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\leatherbackpack_m.p3d";
			female="Survivalists_Mods\characters\backpacks\leatherbackpack_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\backpacks\data\leatherbackpack.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\backpacks\data\leatherbackpack.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\backpacks\data\leatherbackpack_damage.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth_damage.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches_damage.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\backpacks\data\leatherbackpack_damage.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth_damage.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches_damage.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\backpacks\data\leatherbackpack_destruct.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_cloth_destruct.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_pouches_destruct.rvmat", "Survivalists_Mods\characters\backpacks\data\leatherbackpack_straps_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_SurvivalBackpack_Default: HuntingBag  // new
	{
		scope=2;
		model="Survivalists_Mods\characters\backpacks\survivalbackpack_g.p3d";
		itemsCargoSize[]={8,8};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\survivalbackpack_co.paa",
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\characters\backpacks\data\survivalbackpack.rvmat",
    };
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\survivalbackpack_m.p3d";
			female="Survivalists_Mods\characters\backpacks\survivalbackpack_m.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\backpacks\data\survivalbackpack.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\backpacks\data\survivalbackpack.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\backpacks\data\survivalbackpack_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\backpacks\data\survivalbackpack_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\backpacks\data\survivalbackpack_destruct.rvmat"}}
					};
				};
			};
		};    
	};

  class SRP_SlingBackpack_Default: AliceBag_ColorBase  // new
	{
		scope=2;
		model="Survivalists_Mods\characters\backpacks\shoulderslingbackpack_g.p3d";
		itemsCargoSize[]={8,8};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack_tan_co.paa",
		};
    hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack.rvmat",
    };
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\shoulderslingbackpack_m.p3d";
			female="Survivalists_Mods\characters\backpacks\shoulderslingbackpack_m.p3d";
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
						{1.0,{"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack_destruct.rvmat"}}
					};
				};
			};
		}; 
	};
  class SRP_SlingBackpack_Red: SRP_SlingBackpack_Default  // new
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\shoulderslingbackpack_red_co.paa",
		};
	};

  class SRP_Small_Military_Pack_Tan: HuntingBag  // BP_Huntbackpack
	{
		scope=2;
		displayName="Small Military Pack";
		descriptionShort="A small backpack with Military webbing around it";
		model="Survivalists_Mods\characters\backpacks\Small_Military_Pack_g.p3d";
		itemsCargoSize[]={7,7};
    rotationFlags=1;
		attachments[]=
		{

		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\Small_Military_Pack_Tan_CO.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\Small_Military_Pack.p3d";
			female="Survivalists_Mods\characters\backpacks\Small_Military_Pack.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\backpacks\data\Small_Military_Pack.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\backpacks\data\Small_Military_Pack.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\backpacks\data\Small_Military_Pack_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\backpacks\data\Small_Military_Pack_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\backpacks\data\Small_Military_Pack_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Small_Military_Pack_Black: SRP_Small_Military_Pack_Tan  // new
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\Small_Military_Pack_Black_CO.paa"
		};
	};
  class SRP_Small_Military_Pack_Green: SRP_Small_Military_Pack_Tan  // new
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\Small_Military_Pack_Green_CO.paa"
		};
	};

  class SRP_Big_Military_Pack_Tan: HuntingBag 
	{
		scope=2;
		displayName="Large Military Pack";
		descriptionShort="A Large backpack with Military webbing around it";
		model="Survivalists_Mods\characters\backpacks\Big_Military_Pack_g.p3d";
		itemsCargoSize[]={10,10};
    rotationFlags=1;
		attachments[]=
		{

		};
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\Big_Military_Pack_Tan_CO.paa"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\backpacks\Big_Military_Pack.p3d";
			female="Survivalists_Mods\characters\backpacks\Big_Military_Pack.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\backpacks\data\Big_Military_Pack.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\backpacks\data\Big_Military_Pack.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\backpacks\data\Big_Military_Pack_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\backpacks\data\Big_Military_Pack_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\backpacks\data\Big_Military_Pack_destruct.rvmat"}}
					};
				};
			};
		};
	};
  class SRP_Big_Military_Pack_Green: SRP_Big_Military_Pack_Tan
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\Big_Military_Pack_Green_CO.paa"
		};
	};
  class SRP_Big_Military_Pack_Black: SRP_Big_Military_Pack_Tan
	{
		scope=2;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\backpacks\data\Big_Military_Pack_Black_CO.paa"
		};
	};

};