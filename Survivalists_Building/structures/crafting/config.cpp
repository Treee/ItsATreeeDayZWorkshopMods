class CfgPatches
{
	class Survivalists_Building_Structures_Crafting
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
      "DZ_Data",
      "DZ_Scripts"
		};
	};
};
class CfgVehicles
{
  class HouseNoDestruct;
  class Inventory_Base;

// ---------------------PRE FABS
  class SRP_PrefabCrafting_Base: Inventory_Base
	{
		scope=0;
		displayName="BaseCraftingBench";
		descriptionShort="Base Crafting Bench";
		model="Survivalists_Building\structures\crafting\SRP_genericworkbench.p3d";
		carveNavmesh=1;
		weight=500;
		itemSize[]={2,2};
    itemsCargoSize[]={10,10};
		physLayer="item_large";
    minPlacingDist=5;
    slopeTolerance=0.2;
    alignHologramToTerain=1;
	};

  class SRP_PrefabCrafting_carpentry: SRP_PrefabCrafting_Base
	{
		scope=1;
    displayName="Carpentry Workbench";
    descriptionShort="A workbench useful for making wooden crafts.";
    model="Survivalists_Building\structures\crafting\SRP_genericworkbench.p3d";
    attachments[]=
    {
      "SRP_WoodDrill",
      "SRP_WoodClamp",
      "Material_WoodenLogs", // 2
      "Material_L1_WoodenLogs", // 4
      "Material_L2_WoodenLogs", // 4
      "Material_L3_WoodenLogs", // 4
      "Material_L1_WoodenPlanks", // 20
      "Material_L1W1_WoodenPlanks", // 20
      "Material_L1W2_WoodenPlanks", // 20
      "Material_L1W3_WoodenPlanks", // 20
      "Material_L2_WoodenPlanks", // 20
      "Material_L2W1_WoodenPlanks", // 20
      "Material_L2W2_WoodenPlanks", // 20
      "Material_L2W3_WoodenPlanks", // 20       
      "Truck_01_WoodenPlanks", //100
      "Material_MetalSheets", // 20
      "Material_Nails", // 99
      "Material_L1_Nails",
      "Material_L1W1_Nails",
      "Material_L1W2_Nails",
      "Material_L1W3_Nails",
      "Material_L2_Nails",
      "Material_L2W1_Nails",
      "Material_L2W2_Nails",
      "Material_L2W3_Nails",
      "Material_L3_Nails",        
      "Material_Shelter_Fabric", // 4
      "Material_FPole_Rope", // 1
      "Material_Shelter_Rope", // 1
      "Rope", // 1
      "MetalWire", // 1
      "Material_MetalWire", // 1
      "Material_FPole_MetalWire", // 1
    };
    class GUIInventoryAttachmentsProps
		{
      class Augments
			{
				name="Augments";
				description="Attachments for wood workbench";
				attachmentSlots[]=
				{
					"SRP_WoodDrill",
          "SRP_WoodClamp"
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};	
      class WoodenLogs
			{
				name="Wooden Logs";
				description="Wooden Logs";
				attachmentSlots[]=
				{
          "Material_WoodenLogs", // 2
          "Material_L1_WoodenLogs", // 4
          "Material_L2_WoodenLogs", // 4
          "Material_L3_WoodenLogs", // 4
        };
				icon="set:dayz_inventory image:woodenlog";
			};	
      class WoodenPlanks
			{
				name="Wooden Planks";
				description="Wooden Planks";
				attachmentSlots[]=
				{
          "Material_L1_WoodenPlanks", // 20
          "Material_L1W1_WoodenPlanks", // 20
          "Material_L1W2_WoodenPlanks", // 20
          "Material_L1W3_WoodenPlanks", // 20
          "Material_L2_WoodenPlanks", // 20
          "Material_L2W1_WoodenPlanks", // 20
          "Material_L2W2_WoodenPlanks", // 20
          "Material_L2W3_WoodenPlanks", // 20       
          "Truck_01_WoodenPlanks", //100
        };
				icon="set:dayz_inventory image:planks";
			};
      class MetalSheet
			{
				name="Sheet Metal";
				description="Sheet Metal";
				attachmentSlots[]=
				{
          "Material_MetalSheets", // 2
        };
				icon="set:dayz_inventory image:plates";
			};
      class Nails
			{
				name="Nails";
				description="Nails";
				attachmentSlots[]=
				{
          "Material_Nails", // 99
          "Material_L1_Nails",
          "Material_L1W1_Nails",
          "Material_L1W2_Nails",
          "Material_L1W3_Nails",
          "Material_L2_Nails",
          "Material_L2W1_Nails",
          "Material_L2W2_Nails",
          "Material_L2W3_Nails",
          "Material_L3_Nails",        
        };
				icon="set:dayz_inventory image:nails";
			};	
      class ExtraMaterial
			{
				name="Extra Material";
				description="Extra Material";
				attachmentSlots[]=
				{
          "Material_Shelter_Fabric", // 4
          "Material_FPole_Rope", // 1
          "Material_Shelter_Rope", // 1
          "Rope", // 1
          "MetalWire", // 1
          "Material_MetalWire", // 1
          "Material_FPole_MetalWire", // 1
        };
				icon="set:dayz_inventory image:metalwire";
			};	
		};
	};
  class SRP_PrefabCrafting_metalworking: SRP_PrefabCrafting_Base
	{
		scope=1;
    displayName="Metalworking Workbench";
    descriptionShort="A workbench useful for making metal crafts.";
    model="Survivalists_Building\structures\crafting\SRP_genericworkbench_metal.p3d";
    attachments[]=
    {
      "SRP_WoodDrill",
      "SRP_WoodClamp",
      "Material_WoodenPlanks", // 20
      "Material_L1_WoodenPlanks", // 20
      "Material_L1W1_WoodenPlanks", // 20
      "Material_L1W2_WoodenPlanks", // 20
      "Material_L1W3_WoodenPlanks", // 20
      "Material_L1W1_MetalSheets", // 20
      "Material_L1W2_MetalSheets", // 20
      "Material_L1W3_MetalSheets", // 20
      "Material_L2W1_MetalSheets", // 20
      "Material_L2W2_MetalSheets", // 20
      "Material_L2W3_MetalSheets", // 20
      "Material_L3W1_MetalSheets", // 20
      "Material_L3W2_MetalSheets", // 20
      "Material_L3W3_MetalSheets", // 20
      "Material_Nails", // 99
      "Material_L1_Nails",
      "Material_L1W1_Nails",
      "Material_L1W2_Nails",
      "Material_L1W3_Nails",
      "BatteryD", // 1
      "CarBattery",
      "TruckBattery",
      "LargeBattery",
      "Material_Shelter_Fabric", // 4
      "Material_FPole_Rope", // 1
      "Material_Shelter_Rope", // 1
      "Rope", // 1
      "MetalWire", // 1
      "Material_MetalWire", // 1
      "Material_FPole_MetalWire", // 1
    };
    class GUIInventoryAttachmentsProps
		{
      class Augments
			{
				name="Augments";
				description="Attachments for wood workbench";
				attachmentSlots[]=
				{
					"SRP_WoodDrill",
          "SRP_WoodClamp"
				};
				icon="set:dayz_inventory image:cat_vehicle_engine";
			};
      class WoodenPlanks
			{
				name="Wooden Planks";
				description="Wooden Planks";
				attachmentSlots[]=
				{
          "Material_WoodenPlanks",
          "Material_L1_WoodenPlanks", // 20
          "Material_L1W1_WoodenPlanks", // 20
          "Material_L1W2_WoodenPlanks", // 20
          "Material_L1W3_WoodenPlanks", // 20
        };
				icon="set:dayz_inventory image:planks";
			};
      class MetalSheet
			{
				name="Sheet Metal";
				description="Sheet Metal";
				attachmentSlots[]=
				{
          "Material_L1W1_MetalSheets", // 20
          "Material_L1W2_MetalSheets", // 20
          "Material_L1W3_MetalSheets", // 20
          "Material_L2W1_MetalSheets", // 20
          "Material_L2W2_MetalSheets", // 20
          "Material_L2W3_MetalSheets", // 20
          "Material_L3W1_MetalSheets", // 20
          "Material_L3W2_MetalSheets", // 20
          "Material_L3W3_MetalSheets", // 20
        };
				icon="set:dayz_inventory image:plates";
			};
      class Nails
			{
				name="Nails";
				description="Nails";
				attachmentSlots[]=
				{
          "Material_Nails", // 99
          "Material_L1_Nails",
          "Material_L1W1_Nails",
          "Material_L1W2_Nails",
          "Material_L1W3_Nails",
        };
				icon="set:dayz_inventory image:nails";
			};	
      class PowerGeneration
			{
				name="Power Source";
				description="Power Source";
				attachmentSlots[]=
				{
          "BatteryD", // 1
          "CarBattery",
          "TruckBattery",
          "LargeBattery",
        };
				icon="set:dayz_inventory image:carbattery";
			};	
      class ExtraMaterial
			{
				name="Extra Material";
				description="Extra Material";
				attachmentSlots[]=
				{
          "Material_Shelter_Fabric", // 4
          "Material_FPole_Rope", // 1
          "Material_Shelter_Rope", // 1
          "Rope", // 1
          "MetalWire", // 1
          "Material_MetalWire", // 1
          "Material_FPole_MetalWire", // 1
        };
				icon="set:dayz_inventory image:metalwire";
			};	
		};
	};
  class SRP_PrefabCrafting_drugtub: SRP_PrefabCrafting_Base
	{
    scope=1;
		color="DrugBench";
		displayName="Illicit Drug Workbench";
		descriptionShort="A workbench used for brewing the highest quality drugs in the apocalypse.";
    model="Survivalists_Building\structures\crafting\srp_drugworkbench.p3d";
    attachments[]=
		{
			"MethRecipe",
			"BathSaltsRecipe",
			"AcidRecipe",
			"GasCanister",
			"LargeBattery", //CarBattery and TruckBattery fill this (do script check?)
			"LightBulb",
      "Disinfectant",
      "Chemlight",
			"Material_MetalSheets",
      "Material_MetalWire",
      "TestTube1",
      "TestTube2",
      "TestTube3",
      "TestTube4",
      "TestTube5",
      "TestTube6"
		};
    class GUIInventoryAttachmentsProps
		{
			class Recipes
			{
				name="Recipe Book";
				description="Various recipes to aid in crafting drugs.";
				attachmentSlots[]=
				{
					"MethRecipe",
					"BathSaltsRecipe",
					"AcidRecipe"
				};
				icon="set:dayz_inventory image:book";
			};
      class LabTubes
			{
				name="Lab Tubes";
				description="Liquid Ingredients";
				attachmentSlots[]=
				{
          "TestTube1",
          "TestTube2",
          "TestTube3",
          "TestTube4",
          "TestTube5",
          "TestTube6"
				};
				icon="set:dayz_inventory image:woodenlog";
			};
			class Material
			{
				name="Raw Materials";
				description="Other Ingredients";
				attachmentSlots[]=
				{
          "GasCanister",
          "LargeBattery", //CarBattery and TruckBattery fill this (do script check?)
          "LightBulb",
          "Disinfectant",
          "Chemlight",
          "Material_MetalSheets",
          "Material_MetalWire"
				};
				icon="set:dayz_inventory image:disinfectant";
			};
		};	
	};
  class SRP_PrefabCrafting_tailoring: SRP_PrefabCrafting_Base
	{
    scope=1;
		displayName="Tailoring Workbench";
		descriptionShort="A sewing machine on a table ready to tailor clothing";
    model="Survivalists_Building\structures\crafting\srp_tailorworkbench.p3d";
    attachments[]=
		{
			"SRP_SewingMachine",
      "SRP_SewingThread1",
      "SRP_SewingThread2",
      "SRP_SewingThread3",
      "SRP_SewingThread4",
      "SRP_SewingThread5",
      "TailoringPelt1",
      "TailoringPelt2",
      "TailoringPelt3",
      "TailoringPelt4",
      "TailoringPelt5",
      "Tailoring_Leather",
      "Tailoring_Sticks",
      "Tailoring_Bones",
      "Tailoring_Fabric",
      "Tailoring_MetalWire",
      "Tailoring_MetalPlate",
		};
    class GUIInventoryAttachmentsProps
		{
			class SewingMachine
			{
				name="Sewing Machine";
				description="A belt driven sewing machine.";
				attachmentSlots[]=
				{
					"SRP_SewingMachine"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};      
      class AnimalPelts
			{
				name="Animal Pelts";
				description="Animal Pelts for sewing.";
				attachmentSlots[]=
				{
					"TailoringPelt1",
          "TailoringPelt2",
          "TailoringPelt3",
          "TailoringPelt4",
          "TailoringPelt5",
				};
				icon="set:dayz_inventory image:animal_pelt";
			};
      class SewingThread
			{
				name="Sewing Thread";
				description="Spools of thread for embroidering fabric.";
				attachmentSlots[]=
				{
					"SRP_SewingThread1",
          "SRP_SewingThread2",
          "SRP_SewingThread3",
          "SRP_SewingThread4",
          "SRP_SewingThread5",
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
      class Misc
			{
				name="Misc Ingredients";
				description="Various ingredients that enhance fabric.";
				attachmentSlots[]=
				{
					"Tailoring_Leather",
          "Tailoring_Sticks",
          "Tailoring_Bones",
          "Tailoring_Fabric",
          "Tailoring_MetalWire",
          "Tailoring_MetalPlate",
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
		};
	};
  class SRP_PrefabCrafting_smithing: SRP_PrefabCrafting_Base
	{
    scope=1;
		displayName="Anvil Workbench";
		descriptionShort="A heavy iron anvil. Useful for forming metal into shapes.";
    model="Survivalists_Building\structures\crafting\srp_smithingworkbench.p3d";
    attachments[]=
    {
      "SRP_MetalPlate1",
      "SRP_MetalPlate2",
      "SRP_MetalPlate3",
      "SRP_MetalPlate4",
      "SRP_MetalPlate5",
      "SRP_MetalRod1",
      "SRP_MetalRod2",
      "SRP_MetalRod3",
      "SRP_MetalRod4",
      "SRP_MetalRod5",
      "Smithing_Leather",
      "Smithing_MetalWire",
      "Smithing_Fabric",
      "Smithing_Rope",
      "Smithing_WoodenLogs",
      "SRP_PreciousStone1",
      "SRP_PreciousStone2",
      "SRP_PreciousStone3",
      "SRP_PreciousStone4",
      "SRP_PreciousStone5",
    };
    class GUIInventoryAttachmentsProps
		{
      class Misc
			{
				name="Misc";
				description="Other ingredients";
				attachmentSlots[]=
				{
          "Smithing_Leather",
					"Smithing_MetalWire",
          "Smithing_Fabric",
          "Smithing_Rope",
          "Smithing_WoodenLogs"
				};
				icon="set:dayz_inventory image:missing";
			};
			class MetalPlates
			{
				name="Metal Plates";
				description="Smithable Metal Plates";
				attachmentSlots[]=
				{
					"SRP_MetalPlate1",
          "SRP_MetalPlate2",
          "SRP_MetalPlate3",
          "SRP_MetalPlate4",
          "SRP_MetalPlate5",
				};
				icon="set:dayz_inventory image:plates";
			};
      class MetalRods
			{
				name="Metal Rods";
				description="Smithable Metal Rods";
				attachmentSlots[]=
				{
					"SRP_MetalRod1",
          "SRP_MetalRod2",
          "SRP_MetalRod3",
          "SRP_MetalRod4",
          "SRP_MetalRod5",
				};
				icon="set:dayz_inventory image:woodenlog";
			};
      class GemStones
			{
				name="Cut Gems";
				description="Various rough and refined precious stones.";
				attachmentSlots[]=
				{
					"SRP_PreciousStone1",
          "SRP_PreciousStone2",
          "SRP_PreciousStone3",
          "SRP_PreciousStone4",
          "SRP_PreciousStone5",
				};
				icon="set:dayz_inventory image:stones";
			};
		};
	};
};