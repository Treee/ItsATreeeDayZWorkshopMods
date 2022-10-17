class CfgMods
{
	class Survivalists_Mods
	{
		type="mod";
		author="ItsATreee | Sir Locksley | Orin | Alevaric | Mar | Turko";
		name="Survivalists_Mods";
		dir="Survivalists_Mods";
    inputs="Survivalists_Mods/inputs.xml";
		dependencies[]={"Game","World","Mission"};
		class defs
		{
      class imageSets
      {
        files[]=
        {
          "Survivalists_Mods/gui/images/srp_sleep_iconset.imageset"
        };
      };
			class gameScriptModule
			{
				value = "";
        files[] = {"Survivalists_Mods/scripts/3_game"};			
      };
			class worldScriptModule
			{
				value = "";
        files[] = {"Survivalists_Mods/scripts/4_world"};			
      };
      class missionScriptModule
			{
				value="";
				files[]= {"Survivalists_Mods/scripts/5_mission"};
			};
		};
	};
};

class CfgPatches
{
	class Survivalists_Mods
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
      "DZM_VPPAdminToolsScripts", // VPP logging enhancement
      "Mass_Textures", // MassNBC_Bag, removing admin compass, cat ears
      "Ragged_Eyepatch", //windstride
      "Eyepatch", //windstride
      "Notes_Gear", // WrittenNote from notes
      "deerisle", // for the map (security door)      
      "Deerisle_Security_System", // overriding air craft carrier loot
      "DeerIsle_Weapons",
      "JMC_Mjolnir",      
      "Survivalists_Narcotics",
      "Survivalists_Drink",
      "Survivalists_Food",
      "Survivalists_RadioElectronics"
		};
	};
};