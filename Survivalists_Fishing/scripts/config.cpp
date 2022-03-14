class CfgPatches
{
	class Survivalists_Fishing_Scripts
	{
    units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=	
    { 
      "Survivalists_Fishing"
    };
	};
};

class CfgSlots
{
  class Slot_SRP_ClamMeat
	{
		name="SRP_ClamMeat";
		displayName="Clam Meat";
		ghostIcon="set:dayz_inventory image:food";
	};  

  class Slot_SRP_ClamPearl
	{
		name="SRP_ClamPearl";
		displayName="Clam Pearl";
		ghostIcon="set:dayz_inventory image:tf_stones";
	};

  class Slot_SRP_Fish_Small1
	{
		name="SRP_Fish_Small1";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small2
	{
		name="SRP_Fish_Small2";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small3
	{
		name="SRP_Fish_Small3";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small4
	{
		name="SRP_Fish_Small4";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Small5
	{
		name="SRP_Fish_Small5";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_Fish_Large1
	{
		name="SRP_Fish_Large1";
		displayName="Fish";
		ghostIcon="set:dayz_inventory image:food";
	};
  class Slot_SRP_FishingLure
	{
		name="SRP_FishingLure";
		displayName="Fishing Lure";
		ghostIcon="set:dayz_inventory image:chemlight";
	};
  class Slot_SRP_Aquarium_Top
	{
		name="SRP_Aquarium_Top";
		displayName="Aquarium Top";
		ghostIcon="set:dayz_inventory image:planks";
	};
  class Slot_SRP_Aquarium_Bot
	{
		name="SRP_Aquarium_Bot";
		displayName="Aquarium Foundation";
		ghostIcon="set:dayz_inventory image:planks";
	};
  class Slot_SRP_Aquarium_Glass1
	{
		name="SRP_Aquarium_Glass1";
		displayName="Glass Pane";
		ghostIcon="set:dayz_inventory image:plates";
	};
  class Slot_SRP_Aquarium_Glass2
	{
		name="SRP_Aquarium_Glass2";
		displayName="Glass Pane";
		ghostIcon="set:dayz_inventory image:plates";
	};
  class Slot_SRP_Aquarium_Glass3
	{
		name="SRP_Aquarium_Glass3";
		displayName="Glass Pane";
		ghostIcon="set:dayz_inventory image:plates";
	};
  class Slot_SRP_Aquarium_Glass4
	{
		name="SRP_Aquarium_Glass4";
		displayName="Glass Pane";
		ghostIcon="set:dayz_inventory image:plates";
	};
};

class CfgNonAIVehicles
{
  class ProxyAttachment;

  class Proxysrp_clammeat_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_ClamMeat"};
		model="Survivalists_Fishing\proxy\srp_clammeat_proxy.p3d";
	};
  class Proxysrp_clampearl_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_ClamPearl"};
		model="Survivalists_Fishing\proxy\srp_clampearl_proxy.p3d";
	};
  class Proxysrp_fish1_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small1"};
		model="Survivalists_Fishing\proxy\srp_fish1_proxy.p3d";
	};
  class Proxysrp_fish2_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small2"};
		model="Survivalists_Fishing\proxy\srp_fish2_proxy.p3d";
	};
  class Proxysrp_fish3_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small3"};
		model="Survivalists_Fishing\proxy\srp_fish3_proxy.p3d";
	};
  class Proxysrp_fish4_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small4"};
		model="Survivalists_Fishing\proxy\srp_fish4_proxy.p3d";
	};
  class Proxysrp_fish5_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Small5"};
		model="Survivalists_Fishing\proxy\srp_fish5_proxy.p3d";
	};

  class Proxysrp_fish1_large_proxy: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"SRP_Fish_Large1"};
		model="Survivalists_Fishing\proxy\srp_fish1_large_proxy.p3d";
	};
};