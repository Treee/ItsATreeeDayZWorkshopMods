modded class PlayerBase
{
  protected int m_FacePaintState;

  override void Init()
  {
    super.Init();

    m_FacePaintState = -1;
    RegisterNetSyncVariableInt("m_FacePaintState", -1, m_ModuleLifespan.GetFacePaintCount(GetType()));
  }

  // override void OnVariablesSynchronized()
	// {
  //   super.OnVariablesSynchronized();

  //   if (m_FacePaintState >= -1 && (IsPlayerLoaded() || IsControlledPlayer()))
  //   {
  //     UpdateFacePaintVisual();
  //   }
	// }

  override void OnRPC(PlayerIdentity sender, int rpc_type, ParamsReadContext ctx)
  {
    super.OnRPC(sender, rpc_type, ctx);

    switch(rpc_type)
    {
      case SRP_FACEPAINT_RPC.CHECK_SRP_FACEPAINT_CONFIG: // this case is for grabbing FacePaint config from the server
      {
        Param1<SRPFacePaintConfig> configParams;
        if(!ctx.Read(configParams))
        {
          return;        
        }
        GetDayZGame().SetSRPFacePaintConfig(configParams.param1);
        break;
      }
    }
  }

  void SetFacePaint(int index)
  {
    m_FacePaintState = index;
    SetSynchDirty();
  }

  int GetFacePaintIndex()
  {
    return m_FacePaintState;
  }

  void ClearPaint()
  {
    SetFacePaint(-1);
  }

  string GetCurrentCamoIndexName(int index)
  {
    string value = "";
    if ( m_ModuleLifespan )
		{
      FacePaintStyle nextFacePaint = m_ModuleLifespan.GetFacePaintMaterials(GetType(), index);
      if (nextFacePaint)
      {
        value = nextFacePaint.GetPaintName();
      }
    }
    return value;
  }

  string GetCurrentCamoMaterialPath(int index)
  {
    string value = "";
    if ( m_ModuleLifespan )
		{
      FacePaintStyle nextFacePaint = m_ModuleLifespan.GetFacePaintMaterials(GetType(), index);
      if (nextFacePaint)
      {
        value = nextFacePaint.GetMaterial(1);
      }
      if (index == -1)
      {
        nextFacePaint = m_ModuleLifespan.GetFacePaintMaterials(GetType(), 0);
        if (nextFacePaint)
        {
          value = nextFacePaint.GetMaterial(0);
        }
      }
    }
    return value;
  }
  
  // void UpdateFacePaintVisual()
	// {    
  //   string camoMaterial = GetCurrentCamoMaterialPath(m_FacePaintState);
  //   if (camoMaterial != "")
  //   {
  //     SetFaceMaterial(camoMaterial);
  //   }
	// }

  int GetPlayerFacePaintCount()
  {
    return m_ModuleLifespan.GetFacePaintCount(GetType());
  }
};
