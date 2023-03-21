class Craft_SRP_MaterialSpool_Base extends RecipeBase
{
	override void Init()
	{
		m_Name = "Craft Material Spool - Base";	// action name in game
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 2;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 2;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = -1;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"CableReel");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		// InsertIngredient(1,"DUB_Leatherstrip"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("SRP_LeatherPouch_Default");	// recipe result
		
		m_ResultSetFullQuantity[0] = -1;	// -1 = do nothing
		m_ResultSetQuantity[0] = -1;			// result quantity
		m_ResultSetHealth[0] = -1;			// -1 = do nothing
		m_ResultInheritsHealth[0] = -1;		// -1 = do nothing
		m_ResultInheritsColor[0] = -1;		// -1 = do nothing
		m_ResultToInventory[0] = -2;		// -1 = do nothing
		m_ResultUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by soft skillson this result
		m_ResultReplacesIngredient[0] = -1;	// -1 = do nothing
	}

  override bool CanDo(ItemBase ingredients[], PlayerBase player)
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_MaterialSpool_Base Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_MaterialSpool_Rope extends Craft_SRP_MaterialSpool_Base
{
	override void Init()
	{
    super.Init();
    m_Name = "Craft Material Spool - Rope";	// action name in game
		//ingredient 2	
		InsertIngredient(1,"Rope"); //  secondary ingredient
		//result
		AddResult("SRP_MaterialsSpool_Rope");	// recipe result
	}
};
class Craft_SRP_MaterialSpool_MetalWire extends Craft_SRP_MaterialSpool_Base
{
	override void Init()
	{
    super.Init();
    m_Name = "Craft Material Spool - Metal Wire";	// action name in game
		//ingredient 2	
		InsertIngredient(1,"MetalWire"); //  secondary ingredient
		//result
		AddResult("SRP_MaterialsSpool_MetalWire");	// recipe result
	}
};
class Craft_SRP_MaterialSpool_MetalWire_Copper extends Craft_SRP_MaterialSpool_Base
{
	override void Init()
	{
    super.Init();
    m_Name = "Craft Material Spool - Copper Wire";	// action name in game
		//ingredient 2	
		InsertIngredient(1,"MetalWire_Copper"); //  secondary ingredient
		//result
		AddResult("SRP_MaterialsSpool_MetalWire_Copper");	// recipe result
	}
};