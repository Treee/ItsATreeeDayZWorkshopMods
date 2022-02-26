class SRP_PersonalRadio_NumberStations extends ItemBase
{      
  EffectSound m_ActiveSound;

  bool m_Playing;
  bool m_SyncPlaying;
  int m_RadioFrequencyIndex;
  int m_RadioFrequencyIndexSync;
    
  void SRP_PersonalRadio_NumberStations()
  {
    RegisterNetSyncVariableBool( "m_SyncPlaying" );
    RegisterNetSyncVariableInt( "m_RadioFrequencyIndexSync" );
  }
    
  override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
        
    if( m_SyncPlaying && !m_Playing )
    {
      TurnOn();
    } 
    else if( !m_SyncPlaying && m_Playing )
    {
      TurnOff();
    }
    if (m_RadioFrequencyIndex != m_RadioFrequencyIndexSync)
    {
      m_RadioFrequencyIndex = m_RadioFrequencyIndexSync;
      Play();
    }
	}	
   
  override void SetActions()
	{
    super.SetActions();
    AddAction(ActionTuneCrypticFrequency);
		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
		AddAction(ActionTurnOnWhileOnGround);
		AddAction(ActionTurnOffWhileOnGround);
	}
    
  override void OnMovedInsideCargo( EntityAI container )
	{
    TurnOff();
	}

  void TurnOff()
  {
    GetCompEM().SwitchOff();
  }

  void TurnOn()
  {
    if ( GetCompEM().CanWork() )
    {
      GetCompEM().SwitchOn();
    }
  } 
  
  override void OnWorkStart()
  {
    Play();
  }

  override void OnWorkStop()
  {
    Stop();
  }

  void SetNextFrequency()
  {
    m_RadioFrequencyIndexSync++;
    m_RadioFrequencyIndexSync = m_RadioFrequencyIndexSync % GetNumberStations().Count();
    SetSynchDirty();
  }
  
  void Play()
  {    
    if (!GetGame().IsDedicatedServer())
    {
      if ( m_ActiveSound ) 
      {
        StopSoundSet( m_ActiveSound );
      }
      string soundSetName = GetNumberStations().Get(m_RadioFrequencyIndex);
      PlaySoundSetLoop(m_ActiveSound, soundSetName, 0, 0);
    }    
    m_Playing = true;
    m_SyncPlaying = true;
  }
  
  void Stop()
  {
    m_Playing = false;
    m_SyncPlaying = false;

    if ( m_ActiveSound )
    {
      StopSoundSet( m_ActiveSound );
    }    
  }

  TStringArray GetNumberStations()
  {
    return {
      "Survivalists_Mods_NumberStation1_SoundSet",
      "Survivalists_Mods_NumberStation2_SoundSet",
      "Survivalists_Mods_NumberStation3_SoundSet",
      "Survivalists_Mods_NumberStation4_SoundSet"
    };
  }
}