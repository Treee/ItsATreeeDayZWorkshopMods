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
  class Clothing;
  class PlateCarrierHolster;
  class MilitaryBelt;
  class CivilianBelt;
  class PlateCarrierPouches;
  class NylonKnifeSheath;

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
			"VestHolster",
      "Belt_Left",
      "Belt_Back",
      "WalkieTalkie",
      "Chemlight"
		};
    itemsCargoSize[]={3,3};
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
			"VestHolster",
      "Belt_Left",
      "Belt_Back",
      "WalkieTalkie",
      "Chemlight",
      "SmallPouch1",
      "SmallPouch2",
      "LargePouch1",
      "LargePouch2"
		};
    itemsCargoSize[]={3,1};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\tacticalbelt_Tan_co.paa"
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
  
 	class SRP_Elbow_Knee_Pads_Green: Clothing
	{	
		scope=2;
		displayName="Elbow and Knee pads";
		descriptionShort="A pair of elbow and kneepads";
		model="Survivalists_Mods\characters\belts\Elbowpads_Kneepads_g.p3d";
    attachments[]={};
		rotationFlags=16;
		inventorySlot="Gloves";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Vest",
			"Clothing"
		};
		weight=12000;
		itemSize[]={2,3};
		quickBarBonus=2;
		absorbency=0;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek",
      "personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\Pads_Green_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\Elbowpads_Kneepads_m.p3d";
			female="Survivalists_Mods\characters\belts\Elbowpads_Kneepads_m.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\belts\data\Pads.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\belts\data\Pads.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\belts\data\Pads_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\belts\data\Pads_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\belts\data\Pads_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Military_Belt_Tan: MilitaryBelt // new
  {
		scope=2;
		displayName="Military Belt";
		descriptionShort="A Tactical belt with versatile attachments";
		model="Survivalists_Mods\characters\belts\Military_Belt_g.p3d";
    attachments[]=
		{
      "SRP_KatanaSheath",
			"Belt_Left",
			"Chemlight",
			"Belt_Back",
			"Belt_Right",
			"WalkieTalkie",
      "LargePouch1"
		};
    itemsCargoSize[]={0,0};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\Military_Belt_Tan_CO.paa"
		};
    hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\belts\data\Military_belt.rvmat"
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\Military_Belt.p3d";
			female="Survivalists_Mods\characters\belts\Military_Belt.p3d";
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
						{1.0,{"Survivalists_Mods\characters\belts\data\Military_belt.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\belts\data\Military_belt.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\Military_belt_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\belts\data\Military_belt_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\Military_belt_destruct.rvmat"}}
					};
				};
			};
		};
  };

	class SRP_Knife_Sheath_Tan: NylonKnifeSheath
	{
		scope = 2;
		displayName = "Knife Sheath - Tan";
		descriptionShort = "A knife sheath. Clips to a belt or vest.";
		model = "Survivalists_Mods\characters\belts\Knife_Sheath.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = 
		{
			"Survivalists_Mods\characters\belts\data\sheath_Tan_CO.paa"
		};
    hiddenSelectionsMaterials[]=
    {
      "Survivalists_Mods\characters\belts\data\sheath.rvmat"
    };
    class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\Knife_Sheath.p3d";
			female="Survivalists_Mods\characters\belts\Knife_Sheath.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
          healthLevels[] = 
          {
            {1.0,{"Survivalists_Mods\characters\belts\data\sheath.rvmat"}},
            {0.7,{"Survivalists_Mods\characters\belts\data\sheath.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\sheath_damage.rvmat"}},
            {0.3,{"Survivalists_Mods\characters\belts\data\sheath_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\sheath_destruct.rvmat"}}
          };
				};
			};
		};	
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};	
	};

  class SRP_Car_WoodenDerby: Clothing
	{	
		scope=2;
		displayName="Wooden Derby Car";
		descriptionShort="This sick ride has all the perks.";
		model="Survivalists_Mods\characters\belts\srp_carwoodenderby_g.p3d";
    attachments[]={};		
    vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		weight=12000;
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		absorbency=0;
		heatIsolation=0.80;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"zbytek",
      "personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\srp_woodencar_co.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\srp_carwoodenderby_m.p3d";
			female="Survivalists_Mods\characters\belts\srp_carwoodenderby_m.p3d";
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
						{1.0,	{	"Survivalists_Mods\characters\belts\data\srp_woodencar.rvmat"}},
						{0.7,	{	"Survivalists_Mods\characters\belts\data\srp_woodencar.rvmat"}},
						{0.5,	{	"Survivalists_Mods\characters\belts\data\srp_woodencar_damage.rvmat"}},
						{0.3,	{	"Survivalists_Mods\characters\belts\data\srp_woodencar_damage.rvmat"}},
						{0.0,	{	"Survivalists_Mods\characters\belts\data\srp_woodencar_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Car_WoodenDerby_Metal: SRP_Car_WoodenDerby
	{	
		scope=2;
		displayName="Metal Derby Car";
		model="Survivalists_Mods\characters\belts\srp_carmetalderby_g.p3d";
		hiddenSelections[]=
		{
			"zbytek",
      "personality"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\belts\data\srp_carmetalderby_co.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\srp_carmetalderby_m.p3d";
			female="Survivalists_Mods\characters\belts\srp_carmetalderby_m.p3d";
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
						{1.0,{"Survivalists_Mods\characters\belts\data\srp_carmetalderby.rvmat"}},
						{0.7,{"Survivalists_Mods\characters\belts\data\srp_carmetalderby.rvmat"}},
						{0.5,{"Survivalists_Mods\characters\belts\data\srp_carmetalderby_damage.rvmat"}},
						{0.3,{"Survivalists_Mods\characters\belts\data\srp_carmetalderby_damage.rvmat"}},
						{0.0,{"Survivalists_Mods\characters\belts\data\srp_carmetalderby_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_Pouch_Belt: Clothing
	{	
		scope=2;
		displayName="Leather Belt";
		descriptionShort="An old leather belt with a pouch attatched to it";
		model="Survivalists_Mods\characters\belts\Leatherpouch_g.p3d";
		attachments[]=
		{
			"WalkieTalkie",
			"Hatchet",
			"belt_left"
		};
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};		
		inventorySlot="Hips";
		simulation="clothing";
		vehicleClass="Clothing";
		weight=1000;
		itemSize[]={3,2};
		itemsCargoSize[]={5,6};
		absorbency=0;
		heatIsolation=0.80;
		noMask=0;
		hiddenSelections[]=
		{
			"zbytek",
      "pouch"
		};
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Mods\characters\belts\data\Leatherpouchbase_co.paa",
			"Survivalists_Mods\characters\belts\data\Leatherpouch_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\Leatherpouch_m.p3d";
			female="Survivalists_Mods\characters\belts\Leatherpouch_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\belts\data\Leatherpouchbase.rvmat","Survivalists_Mods\characters\belts\data\Leatherpouch.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\Leatherpouchbase.rvmat","Survivalists_Mods\characters\belts\data\Leatherpouch.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\Leatherpouchbase_damage.rvmat","Survivalists_Mods\characters\belts\data\Leatherpouch_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\Leatherpouchbase_damage.rvmat","Survivalists_Mods\characters\belts\data\Leatherpouch_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\Leatherpouchbase_destruct.rvmat","Survivalists_Mods\characters\belts\data\Leatherpouch_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  
  class SRP_Holster_Belt: Clothing
	{	
		scope=2;
		displayName="Leather Belt";
		descriptionShort="An old leather belt with a holster attatched";
		model="Survivalists_Mods\characters\belts\Holster_Belt_g.p3d";
		attachments[]=
		{
			"Pistol",
			"belt_left"
		};
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		rotationFlags=64;
		inventorySlot="Hips";
		simulation="clothing";
		vehicleClass="Clothing";
		weight=1000;
		itemSize[]={3,2};
		itemsCargoSize[]={4,6};
		absorbency=0;
		heatIsolation=0.80;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
      "Survivalists_Mods\characters\belts\data\Belt_Holster_CO.paa"
		};	
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\belts\Holster_Belt_m.p3d";
			female="Survivalists_Mods\characters\belts\Holster_Belt_f.p3d";
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\characters\belts\data\Belt_Holster.rvmat"}},
            {0.69999999,{"Survivalists_Mods\characters\belts\data\Belt_Holster.rvmat"}},
            {0.5,{"Survivalists_Mods\characters\belts\data\Belt_Holster_damage.rvmat"}},
            {0.30000001,{"Survivalists_Mods\characters\belts\data\Belt_Holster_damage.rvmat"}},
            {0.0,{"Survivalists_Mods\characters\belts\data\Belt_Holster_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
  
};