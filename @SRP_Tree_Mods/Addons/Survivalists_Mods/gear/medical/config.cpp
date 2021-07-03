class CfgPatches
{
	class Survivalists_Mods_Gear_Medical
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
      "DZ_Gear_Medical"
		};
	};
};
class CfgVehicles
{
  class Inventory_Base;
  class PainkillerTablets;
  class TetracyclineAntibiotics;
  class VitaminBottle;
  class DisinfectantAlcohol;
  class Morphine;
  class ClearSyringe;
  class InjectionVial;
  
  class SRP_BloodPressureMonitor: Inventory_Base // BP_Monitor_pressure
	{
		scope=2;
		displayName="Blood Pressure Monitor";
		descriptionShort="This medical equipmment is used to monitor blood pressure.";
		model="Survivalists_Mods\gear\medical\P_monitor.p3d";
		attachments[]=
		{
			"BP_gas_lamp"
		};
    physLayer="item_large";
		weight=1000;
		itemSize[]={4,9};
		class Cargo
		{
			itemsCargoSize[]={4,4};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class GUIInventoryAttachmentsProps
		{
			class Att
			{
				name="";
				description="";
				attachmentSlots[]=
				{
					"BP_gas_lamp"
				};
				icon="gascanister";
			};
		};
	};

	class SRP_MedicalBed: Inventory_Base //BP_medical_bed
	{
		scope=2;
		displayName="Medical Bed";
		descriptionShort="A bed normally found in a medical facility.";
		model="Survivalists_Mods\gear\medical\medical_bed.p3d";
		slopeTolerance=0.30000001;
		weight=1000;
		itemBehaviour=0;
		physLayer="item_large";
		allowOwnedCargoManipulation=1;
		itemSize[]={10,15};
		class Cargo
		{
			itemsCargoSize[]={4,4};
		};
	};

  // ---------------------------- Medicine
  class SRP_Dexamphetamine: PainkillerTablets  // BP_dexamphetamine
	{
		scope=2;
		displayName="Dexamphetamine";
		descriptionShort="Is a potent central nervous system (CNS) stimulant and amphetamine enantiomer that is prescribed for the treatment of attention deficit hyperactivity disorder (ADHD) and narcolepsy. It is also used as an athletic performance and cognitive enhancer, and recreationally as an aphrodisiac and euphoriant. Dextroamphetamine was also used by military air, tank and special forces as a 'go-pill' during fatigue-inducing missions such as night-time bombing missions or extended combat operations.";
		model="\dz\gear\medical\dexamphetamine.p3d";		
	};

	class SRP_Analgine: PainkillerTablets  // BP_Analgine
	{
		scope=2;
		displayName="Analgin";
		descriptionShort="NOT a narcotic analgesic - Analgin (has analgesic, antipyretic and weak anti-inflammatory action.)";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\Analgine.paa"
		};
	};

	class SRP_Drotaverine: PainkillerTablets  // BP_Drotaverine
	{
		scope=2;
		displayName="Drotaverine";
		descriptionShort="Reduces the intake of ionized active calcium in smooth muscle cells by inhibiting phosphodiesterase and the intracellular accumulation of cyclic adenosine monophosphate. Quickly and completely absorbed in the digestive tract";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\Drotaverine.paa"
		};
	};

  class SRP_Macropen: TetracyclineAntibiotics  // BP_Macropen
	{
		scope=2;
		displayName="Macropen";
		descriptionShort="An antibiotic of the macrolide group. Inhibits protein synthesis in bacterial cells. Reversibly binds to the 50S subunit of the bacterial ribosomal membrane. In low doses the drug has a bacteriostatic effect, in high doses it is bactericidal.";
		varQuantityInit=16;
		varQuantityMin=0;
		varQuantityMax=16;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\makropen.paa"
		};
	};

	class SRP_Amoxicillin: TetracyclineAntibiotics  // BP_Amoksiklav
	{
		scope=2;
		displayName="Amoxicillin";
		descriptionShort="It is a combination of amoxicillin - semi-synthetic penicillin with a broad spectrum of antibacterial activity and clavulanic acid - an irreversible inhibitor β-lactamase. Clavulanic acid forms a stable inactivated complex with these enzymes and ensures the resistance of amoxicillin to the effects of β-lactamase produced by microorganisms.";
		model="\dz\gear\medical\VitaminBottle.p3d";
		varQuantityInit=14;
		varQuantityMin=0;
		varQuantityMax=14;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\amoksiklav.paa"
		};
	};

	class SRP_Amosin: TetracyclineAntibiotics  // BP_Amosin
	{
		scope=2;
		displayName="Amosin";
		descriptionShort="Amosin is an aminobenzyl penicillin, which has a bactericidal effect as a result of inhibiting the synthesis of bacterial cell walls.";
		model="\dz\gear\medical\painkillers2.p3d";
		varQuantityInit=14;
		varQuantityMin=0;
		varQuantityMax=14;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\Amosin.paa"
		};
	};

	class SRP_Ciprolet: TetracyclineAntibiotics  // BP_Ciprolet
	{
		scope=2;
		displayName="Ciprolet";
		descriptionShort="A broad-spectrum antibacterial drug from the group of fluoroquinolones. Bactericidal effect. The drug inhibits the enzyme DNA gyrase of bacteria, as a result of which DNA replication and the synthesis of bacterial cellular proteins are violated. Ciprofloxacin acts both on reproducing microorganisms and on those in the resting phase.";
		model="\dz\gear\medical\painkillers2.p3d";
		varQuantityInit=14;
		varQuantityMin=0;
		varQuantityMax=14;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\Ciprolet.paa"
		};
	};

  class SRP_Toradol: VitaminBottle  // BP_Ketorolak
	{
		scope=2;
		displayName="Toradol";
		descriptionShort="Nonsteroidal anti-inflammatory agent. It has a pronounced analgesic effect, also has anti-inflammatory and moderate antipyretic effect.";
		model="\dz\gear\medical\painkillers2.p3d";
		varQuantityInit=20;
		varQuantityMin=0;
		varQuantityMax=20;
		varQuantityDestroyOnMin=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\Ketorolak.paa"
		};
	};

	class SRP_MagnesiumSulfate: VitaminBottle  // BP_Magnezia
	{
		scope=2;
		displayName="Magnesii Sulfas MgSO4";
		descriptionShort="It has a sedative, diuretic, arterodilating, anticonvulsant, antiarrhythmic, hypotensive, spasmolytic, in large doses - kurarepodobnoe (inhibitory effect on the neuromuscular transmission), tocolytic, hypnotic and narcotic effect, suppresses the respiratory center.";
		model="\dz\gear\medical\VitaminBottle.p3d";
		varQuantityInit=20;
		varQuantityMin=0;
		varQuantityMax=20;
		varQuantityDestroyOnMin=1;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\Mag.paa"
		};
	};

  class SRP_Promedol: Morphine  // BP_Promedol
	{
		scope=2;
		displayName="Promedol";
		descriptionShort="Opioid analgesic is used for pronounced pain syndromes. According to the specifics of its action, it resembles morphine, but has a weaker and shorter time action. The drug has a strong analgesic effect, moderate anti-shock, hypnotic and antispasmodic.";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\Promedol.paa"
		};
	};

	class SRP_DisinfectantAlcohol_Zelenka: DisinfectantAlcohol  // BP_Zelenka
	{
		scope=2;
		displayName="Zelenka";
		descriptionShort="Green liquid on alcohol to lubricate the skin for therapeutic purposes.";
    varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;    
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\zelenka.paa"
		};
	};

	class SRP_DisinfectantAlcohol_Ion: DisinfectantAlcohol  // BP_Iod
	{
		scope=2;
		displayName="Iodium";
		descriptionShort="Irritant, anti-inflammatory, antiseptic. Forms iodamines and destroys microorganisms, being absorbed, actively influences the metabolism, enhancing the processes of de-stimulation; helps to reduce cholesterol levels in the blood.";
    varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\iod.paa"
		};
	};


  //--------------------------------- Syringe Injections
	class SRP_FullSyringe_Base: ClearSyringe  // BP_BloodSyringe_Base
	{
		scope=0; // dont spawn
		displayName="dont spawn, base class for a full syringe";
		descriptionShort="dont spawn this";
		varLiquidTypeInit=4;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"DZ\gear\medical\data\Syringe.rvmat"}},
            {0.69999999,{"DZ\gear\medical\data\Syringe.rvmat"}},
            {0.5,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},
            {0.30000001,{"DZ\gear\medical\data\Syringe_damage.rvmat"}},
            {0,{"DZ\gear\medical\data\Syringe_destruct.rvmat"}}
					};
				};
			};
		};
	};

  class SRP_FullSyringe_Kuru: SRP_FullSyringe_Base  // BP_Kuru_Syringe
	{
		scope=2;
		displayName="Kuru Injector";
		descriptionShort="A full syringe of clear liquid. Only the person who filled the syringe knows exactly what is inside.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};
  
	class SRP_FullSyringe_KuruCure: SRP_FullSyringe_Base // BP_Kuru_Syringe_Vaccine
	{
		scope=2;
		displayName="Kuru Virus Cure";
		descriptionShort="A full syringe of kuru cure. Cross your fingers this was manufactured properly.";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_FullSyringe_Salmonella: SRP_FullSyringe_Base  // BP_Salmonella_Syringe
	{
		scope=2;
		displayName="Salmonella Injector";
		descriptionShort="A full syringe of clear liquid. Only the person who filled the syringe knows exactly what is inside.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
  };

	class SRP_FullSyringe_SalmonellaCure: SRP_FullSyringe_Base  // BP_Salmonella_Syringe_Vaccine
	{
		scope=2;
		displayName="Salmonella Cure";
		descriptionShort="A full syringe of salmonella cure. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

	class SRP_FullSyringe_Influenza: SRP_FullSyringe_Base  // BP_Influenza_Syringe
	{
		scope=2;
		displayName="Influenza Injector";
		descriptionShort="A full syringe of clear liquid. Only the person who filled the syringe knows exactly what is inside.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
  };

	class SRP_FullSyringe_InfluenzaCure: SRP_FullSyringe_Base  // BP_Influenza_Syringe_Vaccine
	{
		scope=2;
		displayName="Influenza Cure";
		descriptionShort="A full syringe of influenza cure. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_FullSyringe_Cholera: SRP_FullSyringe_Base  // BP_Cholera_Syringe
	{
		scope=2;
		displayName="Cholera Injector";
		descriptionShort="A full syringe of clear liquid. Only the person who filled the syringe knows exactly what is inside.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
  };

	class SRP_FullSyringe_CholeraCure: SRP_FullSyringe_Base  // BP_Cholera_Syringe_Vaccine
	{
		scope=2;
		displayName="Cholera Cure";
		descriptionShort="A full syringe of cholera cure. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_FullSyringe_Ceftazidim: SRP_FullSyringe_Base  // BP_Ceftazidim_Syringe
	{
		scope=2;
		displayName="Ceftazidim Injector";
		descriptionShort="A full syringe of Ceftazidim. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_FullSyringe_Ampicillin: SRP_FullSyringe_Base  // BP_Ampiciline_Syringe
	{
		scope=2;
		displayName="Ampicillin Injector";
		descriptionShort="A full syringe of Ampicillin. Cross your fingers this was manufactured properly.";
    hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\medical\data\SyringeFluid_Grey_CA.paa"
		};
	};

  class SRP_InjectionVial_Base: InjectionVial  // BP_InjectionVial_base
	{
		scope=0;// base class
		displayName="do not spawn. base class";
		descriptionShort="do not spawn. base class";
		stackedUnit="ml";
		quantityBar=1;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=100;
		varLiquidTypeInit=4;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_kline1.paa"
		};
	};

	class SRP_InjectionVial_Kuru: SRP_InjectionVial_Base  // BP_Kuru_flask
	{
		scope=2;
		displayName="Kuru Virus Vial";
		descriptionShort="The liquid containing the pathogen of the disease Kuru.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_kuru.paa"
		};
	};
	class SRP_InjectionVial_KuruCure: SRP_InjectionVial_Base  // BP_Kuru_flask_Vaccine
	{
		scope=2;
		displayName="Kuru Cure Flask";
		descriptionShort="The liquid containing the cure for the disease Kuru.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_kuru_v.paa"
		};
	};

	class SRP_InjectionVial_Salmonella: SRP_InjectionVial_Base  // BP_Salmonella_flask
	{
		scope=2;
		displayName="Salmonella Bacteria Vial";
		descriptionShort="The liquid containing the bacteria of the disease Salmonella.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_salm.paa"
		};
	};
	class SRP_InjectionVial_SalmonellaCure: SRP_InjectionVial_Base  // BP_Salmonella_flask_Vaccine
	{
		scope=2;
		displayName="Salmonella Cure Flask";
		descriptionShort="The liquid containing the cure for Salmonella.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_salm_v.paa"
		};
	};

  class SRP_InjectionVial_Influenza: SRP_InjectionVial_Base  // BP_Influenza_flask
	{
		scope=2;
		displayName="Influenza Virus Vial";
		descriptionShort="The liquid containing the influenza virus.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_inf.paa"
		};
	};
	class SRP_InjectionVial_InfluenzaCure: SRP_InjectionVial_Base  // BP_Influenza_flask_Vaccine
	{
		scope=2;
		displayName="Influenza Cure Flask";
		descriptionShort="The liquid containing the cure for Influenza.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_inf_v.paa"
		};
	};

  class SRP_InjectionVial_Cholera: SRP_InjectionVial_Base  // BP_Cholera_flask
	{
		scope=2;
		displayName="Cholera Virus Flask";
		descriptionShort="The liquid containing the cholera virus.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_holera.paa"
		};
	};
	class SRP_InjectionVial_CholeraCure: SRP_InjectionVial_Base  // BP_Cholera_flask_Vaccine
	{
		scope=2;
		displayName="Cholera Cure Flask";
		descriptionShort="The liquid containing the cure for Cholera.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\injectionvial_holera_v.paa"
		};
	};

  class SRP_InjectionVial_Ceftazidim: SRP_InjectionVial_Base  // BP_Ceftazidim_flask
	{
		scope=2;
		displayName="Ceftazidim Flask";
		descriptionShort="Ceftazidime is an antibacterial drug from the group of third-generation cephalosporins, has a broad spectrum and is bactericidal, disrupts the synthesis of the cell wall of microorganisms, and is resistant to most beta-lactamases.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\Ceftazidim_flask.paa"
		};
	};

	class SRP_InjectionVial_Ampicillin: SRP_InjectionVial_Base  // BP_Ampiciline_flask
	{
		scope=2;
		displayName="Ampicillin + Sulbactam";
		descriptionShort="The germicidal antibiotic of a wide spectrum of action, is acid resistant. Blocks the synthesis of peptidoglycan cell walls of microorganisms. The active principle is ampicillin, a broad spectrum semisynthetic penicillin antibiotic that is broken down by beta-lactamases. The second component (sulbactam), not possessing antibacterial activity, inhibits beta-lactamase and in this connection, ampicillin acquires the ability to act on resistant (beta-lactamase-producing) strains.";
		varQuantityInit=100;
    hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\gear\medical\data\AmpSulb.paa"
		};
	};

};