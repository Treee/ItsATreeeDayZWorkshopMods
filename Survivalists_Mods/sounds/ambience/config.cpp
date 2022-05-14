class CfgPatches
{
	class Survivalists_Mods_Sounds_Ambience
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Sounds_Effects",
      "Survivalists_Mods"
		};
	};
};

class CfgSoundShaders
{
	class Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]={};
		frequency=1;
		range=1000;
		rangeCurve[]=
		{
			{50,0.75},
			{250,0.5},
			{500,0.30000001},
			{750,0.30001},
			{1000,0.1}
		};
		volume=1;
	};
	class Survivalists_Mods_Ambience_Chanting1_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_21220.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting2_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_22371.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting3_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_25916.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting4_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_50087.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting5_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_103539.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting6_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_223377.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting7_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_349490.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting8_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_352764.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting9_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_543951.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting10_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_578142.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting11_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_591250.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting12_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_609180.ogg",1}
		};
	};
  class Survivalists_Mods_Ambience_Chanting13_SoundShader: Survivalists_Mods_Ambience_SoundShader_Base
	{
		samples[]=
		{
			{"Survivalists_Mods\sounds\ambience\data\chanting_610805.ogg",1}
		};
	};
};
class CfgSoundSets
{
	class Survivalists_Mods_Ambience_Chanting1_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting1_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting2_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting2_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting3_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting3_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting4_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting4_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting5_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting5_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting6_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting6_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting7_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting7_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting8_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting8_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting9_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting9_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting10_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting10_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting11_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting11_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting12_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting12_SoundShader"
		};
	};
  class Survivalists_Mods_Ambience_Chanting13_SoundSet
	{
		soundShaders[]=
		{
			"Survivalists_Mods_Ambience_Chanting13_SoundShader"
		};
	};
};
