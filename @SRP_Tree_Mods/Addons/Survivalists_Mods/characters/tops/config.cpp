class CfgPatches
{
	class Survivalists_Mods_Characters_Tops
	{
		units[]={	};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
      "DZ_Characters_Tops",
      "Survivalists_Mods"
		};
	};
};
class CfgVehicles
{
  class Clothing;
  class TShirt_ColorBase;
  class TacticalShirt_ColorBase;
  class MiniDress_ColorBase;
  class BomberJacket_ColorBase;
  class HuntingJacket_ColorBase;
  class RidersJacket_ColorBase;
  class QuiltedJacket_ColorBase;
  class Sweater_ColorBase;
  class M65Jacket_ColorBase;
  class Hoodie_ColorBase;
  class TrackSuitJacket_ColorBase;
  class ParamedicJacket_ColorBase;
  class PoliceJacketOrel;

  // Remove eventually once Lore dictates
  class SaltyCougar_Armband;
  class Skylar_BioZone_Protection: SaltyCougar_Armband
	{
		scope=2;
		displayName="The Queen's Shawl";
		descriptionShort="Ignore biohzard effects";
    class Protection {
      biological=6;
    }
	};

  //----------------------------------- BASE GAME OVERRIDE
  class NBCJacketBase: Clothing
	{
		class Protection {
      biological=1;
    }
	};

  //----------------------------------- BASE GAME RETEXTURES

  class SRP_TShirt_Mendel: TShirt_ColorBase  // BP2_tshirt_Mendel
	{
		scope=2;    
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_Mendel.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_Mendel.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_Mendel.paa"
		};
	};
	class SRP_TShirt_white_rabbit: TShirt_ColorBase  // BP2_tshirt_white_rabbit
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_white_rabbit.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_rabbit.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_rabbit.paa"
		};
	};
	class SRP_TShirt_white_NY: TShirt_ColorBase  // BP2_tshirt_white_NY
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_white_NY.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_NY.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_NY.paa"
		};
	};
	class SRP_TShirt_white_milk: TShirt_ColorBase  // BP2_tshirt_white_milk
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_white_milk.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_milk.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_milk.paa"
		};
	};
	class SRP_TShirt_white_drims: TShirt_ColorBase  // BP2_tshirt_white_drims
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_white_drims.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_drims.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_drims.paa"
		};
	};
	class SRP_TShirt_white_dreams: TShirt_ColorBase  // BP2_tshirt_white_dreams
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_white_dreams.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_dreams.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_dreams.paa"
		};
	};
	class SRP_TShirt_white_bayk: TShirt_ColorBase  // BP2_tshirt_white_bayk
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_white_bayk.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_bayk.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_white_bayk.paa"
		};
	};
	class SRP_TShirt_redsun: TShirt_ColorBase  // BP2_tshirt_redsun
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_redsun.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_redsun.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_redsun.paa"
		};
	};
	class SRP_TShirt_nirvana: TShirt_ColorBase  // BP2_tshirt_nirvana
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_nirvana.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_nirvana.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_nirvana.paa"
		};
	};
	class SRP_TShirt_ironmaiden: TShirt_ColorBase  // BP2_tshirt_ironmaiden
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_ironmaiden.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_ironmaiden.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_ironmaiden.paa"
		};
	};
	class SRP_TShirt_black_rabbit: TShirt_ColorBase  // BP2_tshirt_black_rabbit
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_black_rabbit.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_rabbit.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_rabbit.paa"
		};
	};
	class SRP_TShirt_black_NY: TShirt_ColorBase  // BP2_tshirt_black_NY
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_black_NY.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_NY.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_NY.paa"
		};
	};
	class SRP_TShirt_black_drims: TShirt_ColorBase  // BP2_tshirt_black_drims
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_black_drims.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_drims.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_drims.paa"
		};
	};
	class SRP_TShirt_black_dreams: TShirt_ColorBase  // BP2_tshirt_black_dreams
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_black_dreams.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_dreams.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_dreams.paa"
		};
	};
	class SRP_TShirt_black_cars: TShirt_ColorBase  // BP2_tshirt_black_cars
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_black_cars.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_cars.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_cars.paa"
		};
	};
	class SRP_TShirt_black_bayk: TShirt_ColorBase  // BP2_tshirt_black_bayk
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_black_bayk.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_bayk.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_bayk.paa"
		};
	};
	class SRP_TShirt_suicide: TShirt_ColorBase  // BP2_tshirt_suicide
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_suicide.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_suicide.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_suicide.paa"
		};
	};
	class SRP_TShirt_scream: TShirt_ColorBase  // BP2_tshirt_scream
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_scream.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_scream.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_scream.paa"
		};
	};
	class SRP_TShirt_rock: TShirt_ColorBase  // BP2_tshirt_rock
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_rock.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_rock.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_rock.paa"
		};
	};
	class SRP_TShirt_misfits: TShirt_ColorBase  // BP2_tshirt_misfits
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_misfits.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_misfits.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_misfits.paa"
		};
	};
	class SRP_TShirt_lavash: TShirt_ColorBase  // BP2_tshirt_lavash
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_lavash.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_lavash.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_lavash.paa"
		};
	};
	class SRP_TShirt_alkash: TShirt_ColorBase  // BP2_tshirt_alkash
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_alkash.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_alkash.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_alkash.paa"
		};
	};
	class SRP_TShirt_svin: TShirt_ColorBase  // BP2_TShirt_svin
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_svin.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_svin.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_svin.paa"
		};
	};
	class SRP_TShirt_pes_y: TShirt_ColorBase  // BP2_TShirt_pes_y
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_pes_y.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_pes_y.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_pes_y.paa"
		};
	};
	class SRP_TShirt_black_pes: TShirt_ColorBase  // BP2_TShirt_black_pes
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
      "personality"
    };
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tshirt_black_pes.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_pes.paa",
			"Survivalists_Mods\characters\tops\data\tshirt_black_pes.paa"
		};
	};

  class SRP_TacticalShirt_Yellow: TacticalShirt_ColorBase  // BP2_TacticalShirt_yelo
	{
		scope=2;		
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\pcu5jacket_yelo.paa",
			"Survivalists_Mods\characters\tops\data\pcu5jacket_yelo.paa",
			"Survivalists_Mods\characters\tops\data\pcu5jacket_yelo.paa"
		};
	};
  class SRP_TacticalShirt_Yellow1: TacticalShirt_ColorBase
	{
		scope=2;
    color="yellow1";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\pcu5jacket_black_yelo.paa",
			"Survivalists_Mods\characters\tops\data\pcu5jacket_black_yelo.paa",
			"Survivalists_Mods\characters\tops\data\pcu5jacket_black_yelo.paa"
		};
	};
	class SRP_TacticalShirt_Grin: TacticalShirt_ColorBase  // BP2_TacticalShirt_grin
	{
		scope=2;	
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\pcu5jacket_grin.paa",
			"Survivalists_Mods\characters\tops\data\pcu5jacket_grin.paa",
			"Survivalists_Mods\characters\tops\data\pcu5jacket_grin.paa"
		};
	};
  class SRP_TacticalShirt_Dentac: TacticalShirt_ColorBase  // Bp2_Dentac
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\dentac.paa",
			"Survivalists_Mods\characters\tops\data\dentac.paa",
			"Survivalists_Mods\characters\tops\data\dentac.paa"
		};
	};
  

	class SRP_MiniDress_lather: MiniDress_ColorBase  // BP2_MiniDress_lather
	{
		scope=2;
    color="Lather";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"personality"
    };
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\minidress_lather.paa",
			"Survivalists_Mods\characters\tops\data\minidress_lather.paa",
			"Survivalists_Mods\characters\tops\data\minidress_lather.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\tops\data\minidress_later1.rvmat",
			"Survivalists_Mods\characters\tops\data\minidress_later1.rvmat",
			"Survivalists_Mods\characters\tops\data\minidress_later1.rvmat"
		};
	};

	class SRP_BomberJacket_ada: BomberJacket_ColorBase  // BP2_Bomberjacket_ada
	{
		scope=2;
    color="ada";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\bomberjacket_ada.paa",
			"Survivalists_Mods\characters\tops\data\bomberjacket_ada.paa",
			"Survivalists_Mods\characters\tops\data\bomberjacket_ada.paa"
		};
	};

	class SRP_BomberJacket_Black2: BomberJacket_ColorBase  // BP2_Bomberjacket_2
	{
		scope=2;
		color="black2";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\bomberjacket_black_co-2.paa",
			"Survivalists_Mods\characters\tops\data\bomberjacket_black_co-2.paa",
			"Survivalists_Mods\characters\tops\data\bomberjacket_black_co-2.paa"
		};
	};

	class SRP_BomberJacket_Black3: BomberJacket_ColorBase // BP2_Bomberjacket_3
	{
		scope=2;
		color="Black3";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\bomberjacket_black_co-3.paa",
			"Survivalists_Mods\characters\tops\data\bomberjacket_black_co-3.paa",
			"Survivalists_Mods\characters\tops\data\bomberjacket_black_co-3.paa"
		};
	};

	class SRP_RidersJacket_Brown: RidersJacket_ColorBase  // Bp2_RidersJacket_Brown
	{
		scope=2;
    color="Brown";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\ridejackb.paa",
			"Survivalists_Mods\characters\tops\data\ridejackb.paa",
			"Survivalists_Mods\characters\tops\data\ridejackb.paa"
		};
	};

	class SRP_RidersJacket_White: RidersJacket_ColorBase  // Bp2_RidersJacket_White
	{
		scope=2;
    color="white";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\ridejackw.paa",
			"Survivalists_Mods\characters\tops\data\ridejackw.paa",
			"Survivalists_Mods\characters\tops\data\ridejackw.paa"
		};
	};

	class SRP_RidersJacket_Skull: RidersJacket_ColorBase  // Bp2_Riders_jacket_scalp
	{
		scope=2;
    color="skull";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_scalp.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_scalp.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_scalp.paa"
		};
	};

	class SRP_RidersJacket_Logo1: RidersJacket_ColorBase  // Bp2_Riders_jacket_terebonkay
	{
		scope=2;
    color="Logo1";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_terebonkay.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_terebonkay.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_terebonkay.paa"
		};
	};

	class SRP_RidersJacket_Yoda: RidersJacket_ColorBase  // Bp2_Riders_jacket_yoda
	{
		scope=2;
    color="yoda";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_yoda.paa",
			"Survivalists_Mods\characters\tops\data\riders_yoda.paa",
			"Survivalists_Mods\characters\tops\data\riders_yoda.paa"
		};
	};
	class SRP_RidersJacket_RedSun: RidersJacket_ColorBase  // Bp2_riders_jacket_redsun
	{
		scope=2;
		color="redsun";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_redsun.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_redsun.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_redsun.paa"
		};
	};
	class SRP_RidersJacket_Rabbit: RidersJacket_ColorBase  // Bp2_riders_jacket_rabbit
	{
		scope=2;
		color="rabbit";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_rabbit.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_rabbit.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_rabbit.paa"
		};
	};
	class SRP_RidersJacket_NY: RidersJacket_ColorBase  // Bp2_riders_jacket_NY
	{
		scope=2;
		color="ny";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_NY.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_NY.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_NY.paa"
		};
	};
	class SRP_RidersJacket_Nirvana: RidersJacket_ColorBase  // Bp2_riders_jacket_nirvana
	{
		scope=2;
		color="nirvana";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_nirvana.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_nirvana.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_nirvana.paa"
		};
	};
	class SRP_RidersJacket_Ironmaiden: RidersJacket_ColorBase  // Bp2_riders_jacket_ironmaiden
	{
		scope=2;
		color="ironmaiden";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_ironmaiden.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_ironmaiden.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_ironmaiden.paa"
		};
	};
	class SRP_RidersJacket_Drims: RidersJacket_ColorBase  // Bp2_riders_jacket_drims
	{
		scope=2;
		color="drims";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_drims.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_drims.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_drims.paa"
		};
	};
	class SRP_RidersJacket_Dreams: RidersJacket_ColorBase  // Bp2_riders_jacket_dreams
	{
		scope=2;
		color="dreams";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_dreams.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_dreams.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_dreams.paa"
		};
	};
	class SRP_RidersJacket_Bayk: RidersJacket_ColorBase  // Bp2_riders_jacket_bayk
	{
		scope=2;
		color="Bayk";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\riders_jacket_bayk.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_bayk.paa",
			"Survivalists_Mods\characters\tops\data\riders_jacket_bayk.paa"
		};
	};
	class SRP_RidersJacket_Rop: RidersJacket_ColorBase  // Bp2_riders_jacket_rop
	{
		scope=2;
    color="rop";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\ridejacketROP.paa",
			"Survivalists_Mods\characters\tops\data\ridejacketROP.paa",
			"Survivalists_Mods\characters\tops\data\ridejacketROP.paa"
		};
	};

	class SRP_HuntingJacket_RainJacket: HuntingJacket_ColorBase  // Bp2_Rainjacket
	{
		scope=2;
    color="RainJacket";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\rainjacket.paa",
			"Survivalists_Mods\characters\tops\data\rainjacket.paa",
			"Survivalists_Mods\characters\tops\data\rainjacket.paa"
		};
	};
  
  class SRP_HuntingJacket_Beliy: HuntingJacket_ColorBase  // Beliyjacket
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\beliyjacket.paa",
			"Survivalists_Mods\characters\tops\data\beliyjacket.paa",
			"Survivalists_Mods\characters\tops\data\beliyjacket.paa"
		};
	};

	class SRP_QuiltedJacket_Puffy: QuiltedJacket_ColorBase  // Bp2_Beliypuh
	{
		scope=2;
    color="Puffy";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\beliypuh.paa",
			"Survivalists_Mods\characters\tops\data\beliypuh.paa",
			"Survivalists_Mods\characters\tops\data\beliypuh.paa"
		};
	};

  class SRP_QuiltedJacket_janekq: QuiltedJacket_ColorBase  // Bp_janekq
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\janekq.paa",
			"Survivalists_Mods\characters\tops\data\janekq.paa",
			"Survivalists_Mods\characters\tops\data\janekq.paa"
		};
	};
	class SRP_QuiltedJacket_Denim: QuiltedJacket_ColorBase  // Denjacket
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\denjacket.paa",
			"Survivalists_Mods\characters\tops\data\denjacket.paa",
			"Survivalists_Mods\characters\tops\data\denjacket.paa"
		};
	};
	class SRP_QuiltedJacket_Kurgan: QuiltedJacket_ColorBase  // Kurganjacket
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\kurganjacket.paa",
			"Survivalists_Mods\characters\tops\data\kurganjacket.paa",
			"Survivalists_Mods\characters\tops\data\kurganjacket.paa"
		};
	};

	class SRP_Sweater_SantaRL: Sweater_ColorBase // Bp2_SweaterSantaRL
	{
		scope=2;
    color="santarl";
		itemsCargoSize[]={4,4};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\swrl0.paa",
			"Survivalists_Mods\characters\tops\data\swrl0.paa",
			"Survivalists_Mods\characters\tops\data\swrl0.paa"
		};
	};
	class SRP_Sweater_SantaBlueRL: Sweater_ColorBase  // Bp2_SweaterBlueRL
	{
		scope=2;
    color="santabluerl";
		itemsCargoSize[]={4,4};
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\swrl1.paa",
			"Survivalists_Mods\characters\tops\data\swrl1.paa",
			"Survivalists_Mods\characters\tops\data\swrl1.paa"
		};
	};
	class SRP_Sweater_SantaRedGreenRL: Sweater_ColorBase  // Bp2_SweaterRedGreenRL
	{
		scope=2;
		itemsCargoSize[]={4,4};
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};    
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\swrl2.paa",
			"Survivalists_Mods\characters\tops\data\swrl2.paa",
			"Survivalists_Mods\characters\tops\data\swrl2.paa"
		};
	};
	class SRP_Sweater_SantaRedBlueRL: Sweater_ColorBase  // Bp2_SweaterRedBlueRL
	{
		scope=2;
    color="SantaRedBlueRL";
		itemsCargoSize[]={4,4};
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\swrl3.paa",
			"Survivalists_Mods\characters\tops\data\swrl3.paa",
			"Survivalists_Mods\characters\tops\data\swrl3.paa"
		};
	};

	class SRP_NBCJacket_Orange: NBCJacketBase  // BP2_NBCJ_Orange
	{
		scope=2;
		itemsCargoSize[]={3,2};
		weight=2000;
		heatIsolation=0.80000001;
		absorbency=0;
		repairableWithKits[]={5,6}; // duct tape and tire repair kit
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"zbytek",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\nbc_jacket_g_orange_co.paa",
			"Survivalists_Mods\characters\tops\data\nbc_jacket_co.paa",
			"Survivalists_Mods\characters\tops\data\nbc_jacket_co.paa",
			"Survivalists_Mods\characters\tops\data\nbc_jacket_co.paa"
		};
		class ClothingTypes
		{
			male="\DZ\characters\tops\NBC_Jacket_m.p3d";
			female="\DZ\characters\tops\NBC_Jacket_f.p3d";
		};
	};
  
	class SRP_M65Jacket_Brown: M65Jacket_ColorBase  // BP_M65Jacket_Skin
	{
		scope=2;
    color="Brown";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\m65_jacket_khaki_co5.paa",
			"Survivalists_Mods\characters\tops\data\m65_jacket_khaki_co5.paa",
			"Survivalists_Mods\characters\tops\data\m65_jacket_khaki_co5.paa"
		};
	};
	class SRP_M65Jacket_Grey: M65Jacket_ColorBase  // BP_M65Jacket_Skin1
	{
		scope=2;
    color="Grey";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\m65_jacket_khaki_co6.paa",
			"Survivalists_Mods\characters\tops\data\m65_jacket_khaki_co6.paa",
			"Survivalists_Mods\characters\tops\data\m65_jacket_khaki_co6.paa"
		};
	};

  class SRP_M65Jacket_sndwch65: M65Jacket_ColorBase  // BP_sndwch65
	{
		scope=2;
    color="sndwch65";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\sndwch65.paa",
			"Survivalists_Mods\characters\tops\data\sndwch65.paa",
			"Survivalists_Mods\characters\tops\data\sndwch65.paa"
		};
	};

	class SRP_M65Jacket_janekm65: M65Jacket_ColorBase  // BP_janekm65
	{
		scope=2;
		color="janekm65";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\janekm65.paa",
			"Survivalists_Mods\characters\tops\data\janekm65.paa",
			"Survivalists_Mods\characters\tops\data\janekm65.paa"
		};
	};

	class SRP_M65Jacket_Gordey: M65Jacket_ColorBase  // Gordeyjacket
	{
		scope=2;
    color="janekm65";
		displayName="Leather Jacket";
		descriptionShort="A large leather jacket";
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		weight=1030;
		heatIsolation=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\gordeyjacket.paa",
			"Survivalists_Mods\characters\tops\data\gordeyjacket.paa",
			"Survivalists_Mods\characters\tops\data\gordeyjacket.paa"
		};
	};

  class SRP_TrackSuitJacket_boj: TrackSuitJacket_ColorBase  // BP2_TrackSuitJacket_boj
	{
		scope=2;
    color="boj";
		weight=940;
		itemSize[]={3,3};
		itemsCargoSize[]={6,5};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\tracksuit_jacket_boj.paa",
			"Survivalists_Mods\characters\tops\data\tracksuit_jacket_boj.paa",
			"Survivalists_Mods\characters\tops\data\tracksuit_jacket_boj.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Survivalists_Mods\characters\tops\data\tracksuit_jacket_boj.rvmat",
			"Survivalists_Mods\characters\tops\data\tracksuit_jacket_boj.rvmat",
			"Survivalists_Mods\characters\tops\data\tracksuit_jacket_boj.rvmat"
		};
	};

  class SRP_Hoodie_Janek: Hoodie_ColorBase  // BP_Janek_Hoodie
	{
		scope=2;
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\Janek_hoodie.paa",
			"Survivalists_Mods\characters\tops\data\Janek_hoodie.paa",
			"Survivalists_Mods\characters\tops\data\Janek_hoodie.paa"
		};
	};

	class SRP_ParamedicJacket_BlackMedic: ParamedicJacket_ColorBase  // Medic_J_black
	{
		scope=2;
    color="blackmedic";
		weight=200;
    hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};		
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\Paramedic.paa",
			"Survivalists_Mods\characters\tops\data\Paramedic.paa",
			"Survivalists_Mods\characters\tops\data\Paramedic.paa"
		};
	};
  
	class SRP_PoliceJacketOrel_wktop: PoliceJacketOrel  // Bp_wktop
	{
		scope=2;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\wktop_co.paa",
			"Survivalists_Mods\characters\tops\data\wktop_co.paa",
			"Survivalists_Mods\characters\tops\data\wktop_co.paa"
		};
	};


  //===================== CUSTOM SHIRTS

  class SRP_PlatHoodie: Clothing
	{
    scope=2;
		displayName="Hoodie";
		descriptionShort="$STR_CfgVehicles_Hoodie_ColorBase1";
		model="Survivalists_Mods\characters\tops\srp_plathoodie_g.p3d";
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=850;
		itemSize[]={3,3};
		itemsCargoSize[]={5,4};
		quickBarBonus=1;
		varWetMax=1;
		heatIsolation=0.8;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
    headSelectionsToHide[]=
		{
			"Clipping_BandanaHead",
			"Clipping_BandanaFace"
		};
		hiddenSelections[]=
		{
			"zbytek"
		};
    hiddenSelectionsTextures[]=
		{
			"Survivalists_Mods\characters\tops\data\srp_plathoodie_co.paa"
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
						{1.0, {"Survivalists_Mods\characters\tops\data\srp_plathoodie.rvmat"}},
            {0.69999999, {"Survivalists_Mods\characters\tops\data\srp_plathoodie.rvmat"}},
            {0.5, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.30000001, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_damage.rvmat"}},
            {0.0, {"Survivalists_Mods\characters\tops\data\srp_plathoodie_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Survivalists_Mods\characters\tops\srp_plathoodie_m.p3d";
			female="Survivalists_Mods\characters\tops\srp_plathoodie_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};

  class SRP_PlatHoodie_Wolfbeard: SRP_PlatHoodie
  {
    scope=2;
  }
};