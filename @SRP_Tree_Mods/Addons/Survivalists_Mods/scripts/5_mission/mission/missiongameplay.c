modded class MissionGameplay
{
    private ref CompassHeadingMenu m_CompassHeadingMenu;
    //private ref SRP_RadioNoTransmit m_SRP_RadioNoTransmit;
	
	
	override void OnUpdate(float timeslice) 
	{
    super.OnUpdate(timeslice);
    if (GetUApi()) 
    {
      UAInput inp = GetUApi().GetInputByName("UACompassToggle");
      if (inp && inp.LocalPress()) {
        if (m_CompassHeadingMenu) {
            m_CompassHeadingMenu.CompassToggleHeading();
        } else {
            m_CompassHeadingMenu = new CompassHeadingMenu(true);
        }
      }
    }  
  }
}