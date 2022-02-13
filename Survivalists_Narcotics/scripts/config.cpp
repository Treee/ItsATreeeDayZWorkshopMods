class CfgPatches
{
	class Survivalists_Narcotics_Scripts
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	{ "DZ_Data", "DZ_Scripts"};
	};
};

class CfgSlots
{
  //=====================BASE GAME OVERRIDE
  class Slot_DrugRecipe_Meth
	{
		name="MethRecipe";
		displayName="MethRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_DrugRecipe_BathSalts
	{
		name="BathSaltsRecipe";
		displayName="BathSaltsRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_DrugRecipe_Acid
	{
		name="AcidRecipe";
		displayName="AcidRecipe";
		ghostIcon="set:dayz_inventory image:paper";
	};

	class Slot_SRP_CigaretteCase1
	{
		name="CigaretteCase1";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase2
	{
		name="CigaretteCase2";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase3
	{
		name="CigaretteCase3";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase4
	{
		name="CigaretteCase4";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase5
	{
		name="CigaretteCase5";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase6
	{
		name="CigaretteCase6";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase7
	{
		name="CigaretteCase7";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase8
	{
		name="CigaretteCase8";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase9
	{
		name="CigaretteCase9";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase10
	{
		name="CigaretteCase10";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase11
	{
		name="CigaretteCase11";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase12
	{
		name="CigaretteCase12";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase13
	{
		name="CigaretteCase13";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_CigaretteCase14
	{
		name="CigaretteCase14";
		displayName="Cigarette";
		ghostIcon="set:dayz_inventory image:paper";
	};

  class Slot_SRP_TestTube1
	{
		name="TestTube1";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube2
	{
		name="TestTube2";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube3
	{
		name="TestTube3";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube4
	{
		name="TestTube4";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube5
	{
		name="TestTube5";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
  class Slot_SRP_TestTube6
	{
		name="TestTube6";
		displayName="Test Tube";
		ghostIcon="set:dayz_inventory image:paper";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;

  class Proxycigarettecase_proxy1: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase1"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy1.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy2: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase2"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy2.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy3: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase3"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy3.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy4: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase4"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy4.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy5: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase5"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy5.p3d"; //proxy path 
  };    
  class Proxycigarettecase_proxy6: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase6"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy6.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy7: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase7"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy7.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy8: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase8"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy8.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy9: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase9"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy9.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy10: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase10"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy10.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy11: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase11"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy11.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy12: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase12"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy12.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy13: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase13"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy13.p3d"; //proxy path 
  };
  class Proxycigarettecase_proxy14: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"CigaretteCase14"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\cigarettecase_proxy14.p3d"; //proxy path 
  };

  class Proxytesttube_proxy1: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"TestTube1"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\testtube_proxy1.p3d"; //proxy path 
  };    
  class Proxytesttube_proxy2: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"TestTube2"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\testtube_proxy2.p3d"; //proxy path 
  };
  class Proxytesttube_proxy3: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"TestTube3"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\testtube_proxy3.p3d"; //proxy path 
  };
  class Proxytesttube_proxy4: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"TestTube4"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\testtube_proxy4.p3d"; //proxy path 
  };
  class Proxytesttube_proxy5: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"TestTube5"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\testtube_proxy5.p3d"; //proxy path 
  };
  class Proxytesttube_proxy6: ProxyAttachment //same as p3d name
  {
    scope=2;
    inventorySlot[]={"TestTube6"}; // same as slot name 
    model="Survivalists_Narcotics\proxy\testtube_proxy6.p3d"; //proxy path 
  };
};