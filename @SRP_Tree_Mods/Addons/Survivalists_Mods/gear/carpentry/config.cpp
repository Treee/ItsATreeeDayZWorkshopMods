class CfgPatches
{
	class Survivalists_Mods_Gear_Carpentry
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Camping",
      "Survivalists_Mods"      
		};
	};
};

class CfgVehicles
{
  class HouseNoDestruct;
  class Fence;
  class Inventory_Base;

  class SRP_KitBase;
  //------------------------------ BASE BUILDING


  //-------------------------------- Barricades
  class SRP_Barricade_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Barricade Kit";
		descriptionShort="A Wooden Barricade Kit";
	};

  class SRP_Barricade_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Wooden Barricade";
		descriptionShort="This wood might one way sit between you and a bullet.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenbarricade.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmatt"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_BarricadeWithWindow_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Barricade Kit";
		descriptionShort="A Wooden Barricade Kit";
	};

  class SRP_BarricadeWithWindow_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Wooden Barricade";
		descriptionShort="This wood might one way sit between you and a bullet.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenbarricade_windowed.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmatt"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_WindowBarricade_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Wooden Window Barricade Kit";
		descriptionShort="A Wooden Window Barricade Kit";
	};

  class SRP_WindowBarricade_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Wooden Window Barricade";
		descriptionShort="This wood might one way sit between you and a bullet.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenwindowbarricade.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmatt"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};

  class SRP_WindowBarricadeTall_Wood_Kit: SRP_KitBase //new
	{
		scope=2;
		displayName="Tall Wooden Window Barricade Kit";
		descriptionShort="A Tall Wooden Window Barricade Kit";
	};

  class SRP_WindowBarricadeTall_Wood: Inventory_Base // new
	{
		scope=2;
		displayName="Tall Wooden Window Barricade";
		descriptionShort="This wood might one way sit between you and a bullet.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenwindowbarricadetall.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={15,15};
    hiddenSelections[]=
    {
      "zbytek"
    };
		hiddenSelectionsTextures[]=
    {
      "Survivalists_Mods\gear\carpentry\data\woodenbarricade_co.paa"
		};
		hiddenSelectionsMaterials[]=
    {
			"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000;
					healthLevels[]=
					{
						{1.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.69999999,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.5,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.30000001,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmat"}},
            {0.0,{"Survivalists_Mods\gear\carpentry\data\woodenbarricade.rvmatt"}}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health {damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class Melee
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
				class FragGrenade
				{
          class Health{damage=0;};
          class Blood{damage=0;};
          class Shock{damage=0;};
				};
			};
		};
	};


  // ---------------------PRE FABS
  class SRP_PrefabHouse_Base: HouseNoDestruct  // new
	{
		scope=0;
		displayName="Russian House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
    minPlacingDist=2;
	};

  class SRP_Carpentry_RussianHouse_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Kit";
		descriptionShort="The kit for a house";
	};

  class SRP_Carpentry_RussianHouse: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Russian House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse.p3d";
	};

  class SRP_Carpentry_RussianHouse1_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Kit - Variant 1";
		descriptionShort="The kit for a house";
	};

  class SRP_Carpentry_RussianHouse1: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Russian House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse1.p3d";
	};

  class SRP_Carpentry_WoodenHouseSingleRoom_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden House Kit - Single Room";
		descriptionShort="The kit for a house";
	};

  class SRP_Carpentry_WoodenHouseSingleRoom: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Wooden House";
		descriptionShort="A house.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenhousesingleroom.p3d";
	};

  class SRP_Carpentry_WoodenHouseOuthouse_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden Out House Kit";
		descriptionShort="The kit for an out house";
	};

  class SRP_Carpentry_WoodenHouseOuthouse: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Wooden Out House";
		descriptionShort="An out house.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenouthouse.p3d";
	};
  
  class SRP_Carpentry_WoodenBarn_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden Barn Kit";
		descriptionShort="The kit for a barn";
	};

  class SRP_Carpentry_WoodenBarn: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Wooden Barn";
		descriptionShort="A barn.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenbarn.p3d";
	};

  class SRP_Carpentry_WoodenShanty_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden Shanty Kit";
		descriptionShort="The kit for a shanty";
	};

  class SRP_Carpentry_WoodenShanty: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Wooden Shanty";
		descriptionShort="A shanty.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenshanty.p3d";
	};

  class SRP_Carpentry_WoodenShed_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden Shed Kit";
		descriptionShort="The kit for a Shed";
	};

  class SRP_Carpentry_WoodenShed: SRP_PrefabHouse_Base  // new
	{
		scope=1;
		displayName="Wooden Shed";
		descriptionShort="A Shed.";
		model="Survivalists_Mods\gear\carpentry\srp_woodenshed.p3d";
	};
  
  // ---------------------DOORS
  class SRP_Carpentry_HouseDoor: Fence  // new
	{
		scope=0;
		displayName="Door";
		descriptionShort="A door.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhousedoor.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={15,10};
		physLayer="item_large";
		rotationFlags=2;
    minPlacingDist=5;
    handheld="false";
    attachments[]=
		{
			"Att_CombinationLock"
		};
    class GUIInventoryAttachmentsProps
		{
			class Attachments
			{
				name="$STR_CfgVehicles_Fence_Att_Category_Attachments";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="set:dayz_inventory image:cat_bb_attachments";
				selection="wall";
			};
		};
    class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
    class AnimationSources
		{
			class AnimRotate
			{
				source="user";
				component="selection_door";
				animPeriod=1;
				initPhase=0;
				initOpened=0.5;
			};
      class AnimSourceHidden
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Wall_Gate_Rotate: AnimRotate
			{
			};
		};
    class Construction
		{
			class wall
			{
				class wall_gate
				{
					name="Door";
					is_gate=1;
					id=1;
					required_parts[]={};
					conflicted_parts[]={};
					collision_data[]={};
					build_action_type=1;
					dismantle_action_type=0;
				};
			};
		};
	};

  class SRP_Carpentry_RussianHouseDoor_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Door Kit";
		descriptionShort="The kit for a door";
	};

  class SRP_Carpentry_RussianHouseDoor: SRP_Carpentry_HouseDoor  // new
	{
		scope=2;
		displayName="Door";
		descriptionShort="A door.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhousedoor.p3d";
	};

  class SRP_Carpentry_RussianHouse1Door_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Russian House Door Kit - Variant 1";
		descriptionShort="The kit for a door";
	};

  class SRP_Carpentry_RussianHouse1Door: SRP_Carpentry_HouseDoor  // new
	{
		scope=2;
		displayName="Door";
		descriptionShort="A door.";
		model="Survivalists_Mods\gear\carpentry\srp_russianhouse1door.p3d";
	};

  class SRP_Carpentry_WoodenShedDoor_Kit: SRP_KitBase  // new
	{
		scope=2;
		displayName="Wooden Shed Door Kit";
		descriptionShort="The kit for a door";
	};

  class SRP_Carpentry_WoodenShedDoor: SRP_Carpentry_HouseDoor  // new
	{
		scope=2;
		displayName="Door";
		descriptionShort="A door.";
		model="Survivalists_Mods\gear\carpentry\srp_woodensheddoor.p3d";
	};
};