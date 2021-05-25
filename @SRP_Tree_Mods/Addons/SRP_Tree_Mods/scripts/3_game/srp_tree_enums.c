enum SRP_eModifiers
{
  MDF_TEST = 419,
  MDF_STONED = 420, //finished
  MDF_TOBACCO = 421,//finished
  MDF_ACIDSMILE = 422,   // finished
  MDF_ACIDSKULL = 423,   // finished
  MDF_MUSHROOMS = 424,
  MDF_METH = 425, //finished
  MDF_COCAINE = 426,
  MDF_PCP = 427,
  MDF_HEROINE = 428,
  MDF_ALCOHOL = 429, // 
  MDF_BATHSALTS = 430, // finished

  MDF_SLEEP = 431,
  MDF_BIOHAZARD = 432,
}

// enum EStatLevels
// {
// 	GREAT,
// 	HIGH,
// 	MEDIUM,
// 	LOW,
// 	CRITICAL,
// }

// // BEWARE, ALL NUMBERS 2 RAISED TO THE POWER OF 0 - 32, MAX 32 INDIVIDUAL AGENTS, MUST MATCH CONFIG-SIDE AGENT CONFIGURATION
// enum eAgents
// {
// 	//agent list
// 	CHOLERA 		= 1;
// 	INFLUENZA 		= 2;
// 	SALMONELLA		= 4;
// 	BRAIN 			= 8;
// 	FOOD_POISON		= 16;
// 	CHEMICAL_POISON	= 32;
// 	WOUND_AGENT		= 64;
// 	NERVE_AGENT		= 128;
// }
enum SRP_Medical_Agents
{
  SLEEP_AGENT = 512,
  BIOHAZARD_AGENT = 1024,
}


// enum eBadgeLevel
// {
// 	NONE,
// 	FIRST,
// 	SECOND,
// 	THIRD,
// }

// enum eDisplayElements
// {
// 	DELM_BADGE_STUFFED,
// 	DELM_BADGE_WET,
// 	DELM_BADGE_SICK,
// 	DELM_BADGE_POISONED,
// 	DELM_BADGE_FRACTURE,
// 	DELM_BADGE_BLEEDING,
// 	DELM_BADGE_PILLS,
// 	DELM_BADGE_HEARTBEAT,
// 	//------------------
// 	DELM_TDCY_HEALTH,
// 	DELM_TDCY_BLOOD,
// 	DELM_TDCY_TEMPERATURE,
// 	DELM_TDCY_ENERGY,
// 	DELM_TDCY_WATER,
// 	DELM_TDCY_BACTERIA,
// 	//------------------
// 	DELM_STANCE,
// 	COUNT
// }

enum SRP_eDisplayElements
{
  DELM_TDCY_TIREDNESS
}


// enum eNotifiers
// {
// 	NTF_HEALTHY,
// 	NTF_BLEEDISH,
// 	NTF_HUNGRY,
// 	NTF_THIRSTY,
// 	NTF_STUFFED,
// 	NTF_SICK,
// 	NTF_WETNESS,
// 	NTF_WARMTH,
// 	NTF_FEVERISH,
// 	NTF_BLOOD,
// 	NTF_LIVES,
// 	NTF_STAMINA,
// 	//NTF_AGENT_INFECTION,
// 	NTF_PILLS,
// 	NTF_HEARTBEAT,
// 	NTF_FRACTURE,
//   NTF_TIREDNESS,
// 	//----------------------------
// 	NTF_COUNT,// !!! LAST ITEM !!!
// }

enum SRP_eNotifiers
{
  NTF_TIREDNESS = 42
}



enum SRP_ERPCs
{
  RPC_DRUGS_WEED = 420,
  RPC_DRUGS_TOBACCO = 421,
  RPC_DRUGS_SALTS = 422,
  RPC_DRUGS_METH = 423,
  RPC_DRUGS_ACID = 424,
  RPC_DRUGS_ALCOHOL = 425,
  RPC_DRUGS_TEST = 426
}