class CfgPatches
{
	class Survivalists_Mods_Characters_Belts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{      
			"DZ_Characters",
      "DZ_Characters_Belts",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class PlateCarrierHolster;
  class MilitaryBelt;
  class CivilianBelt;

  class SRP_LegHolster: CivilianBelt // BP_BeltGunBag
  {
		scope=2;
		displayName="Belt and leg holster";
		descriptionShort="A civilian gun belt anbd leg holster";
		model="Survivalists_Mods\characters\belts\legholster_g.p3d";
    attachments[]=
		{
			"Pistol"
		};
    itemsCargoSize[]={5,4};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\legholster_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\belts\data\legholster.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\legholster_m.p3d";
			female="Survivalists_Mods\characters\belts\legholster_m.p3d";
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
						{1.0,{"Survivalists_Mods\characters\belts\data\legholster.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\legholster.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\legholster_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\legholster_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\legholster_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_PoliceBelt: MilitaryBelt // new
  {
		scope=2;
		displayName="Police Belt";
		descriptionShort="A police belt with versatile attachments";
		model="Survivalists_Mods\characters\belts\policebelt_g.p3d";
    attachments[]=
		{
			"Pistol"
		};
    itemsCargoSize[]={5,4};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\policebelt_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\belts\data\policebelt.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\policebelt_m.p3d";
			female="Survivalists_Mods\characters\belts\policebelt_m.p3d";
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
						{1.0,{"Survivalists_Mods\characters\belts\data\policebelt.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\policebelt.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\policebelt_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\policebelt_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\policebelt_destruct.rvmat"}}
					};
				};
			};
		};
  };

  class SRP_TacticalBelt: MilitaryBelt // new
  {
		scope=2;
		displayName="Tactical Belt";
		descriptionShort="A Tactical belt with versatile attachments";
		model="Survivalists_Mods\characters\belts\tacticalbelt_g.p3d";
    attachments[]=
		{
			"Pistol"
		};
    itemsCargoSize[]={5,4};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\tacticalbelt_co.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\belts\data\tacticalbelt.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\tacticalbelt_m.p3d";
			female="Survivalists_Mods\characters\belts\tacticalbelt_m.p3d";
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
						{1.0,{"Survivalists_Mods\characters\belts\data\tacticalbelt.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\tacticalbelt.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\tacticalbelt_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\tacticalbelt_destruct.rvmat"}}
					};
				};
			};
		};
  };
};