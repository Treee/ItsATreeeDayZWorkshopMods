class CfgPatches
{
	class Survivalists_Building_Gear_Camping
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Camping"
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;

  class SRP_Building_KitBase: Inventory_Base
	{
		scope=0; //0 means cannot be directly spawned
		displayName="Building Kit";
		descriptionShort="A wooden box used to transport small items. Find a suitable place to construct. Can be disassembled.";
		model="\DZ\gear\camping\wooden_case.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={7,5};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=2;
		heavyItem=1;
		weight=3000;
		itemBehaviour=2;
		hiddenSelections[]={"camoground"};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Building\gear\camping\data\srp_kitbase_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
          healthLevels[] = {{1,""},{0.7,""},{0.5,""},{0.3,""},{0.1,""}};
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
	};
};