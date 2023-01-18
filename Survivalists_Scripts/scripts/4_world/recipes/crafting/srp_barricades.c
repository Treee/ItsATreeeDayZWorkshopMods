class Craft_SRP_BarricadeKit extends RecipeBase
{	
	override void Init()
	{
		m_Name = "Create Barricade - Kit";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 6;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = 10;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenPlank");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -10;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		InsertIngredient(1,"SRP_WornWorkbench");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[1] = -35;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("SRP_BarricadeKit_Kit");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
    SRP_WornWorkbench workbench = SRP_WornWorkbench.Cast(ingredients[1]);
    if (workbench)
    {
      ItemBase drill;
      Class.CastTo(drill, workbench.FindAttachmentBySlotName("SRP_WoodDrill"));

      ItemBase clamp;
      Class.CastTo(clamp, workbench.FindAttachmentBySlotName("SRP_WoodClamp"));
      return (drill && clamp);
    }
		return false;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		Debug.Log("Craft_SRP_BarricadeKit: Recipe Do method called","recipes");
	}
};

class Craft_SRP_Barricade_OptionsBase extends RecipeBase
{
  int m_RequiredNailsQuantity;
  int m_RequiredWoodenPlanks;
  int m_RequiredMetalSheets;

	override void Init()
	{
		m_Name = "Craft Barricade - Options";
		m_IsInstaRecipe = false;	// should this recipe be performed instantly without animation
		m_AnimationLength = 3;		// animation length in relative time units
		m_Specialty = 0;			// softskills modifier. value > 0 for roughness, value < 0 for precision
		
		//conditions
		m_MinDamageIngredient[0] = -1;	//-1 = disable check
		m_MaxDamageIngredient[0] = 3;	//-1 = disable check
		m_MinQuantityIngredient[0] = -1;	//quantity 1 required for primary ingredient
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;	//-1 = disable check
		m_MaxDamageIngredient[1] = 2;	//-1 = disable check
		m_MinQuantityIngredient[1] = 50;	//quantity 1 required for secondary ingredient
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		
		//ingredient 1  
		InsertIngredient(0,"SRP_BarricadeKit_Kit");	// primary ingredient
		
		m_IngredientAddHealth[0] = 0;	// -1 = do nothing
		m_IngredientSetHealth[0] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[0] = 0;// -1 = do nothing
		m_IngredientDestroy[0] = true;	// -1 = do nothing
		m_IngredientUseSoftSkills[0] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2	
		InsertIngredient(1,"EpoxyPutty"); //  secondary ingredient
		
		m_IngredientAddHealth[1] = 0;	// -1 = do nothing
		m_IngredientSetHealth[1] = -1; 	// -1 = do nothing
		m_IngredientAddQuantity[1] = -50;// -1 = do nothing
		m_IngredientDestroy[1] = false;		// destroy secondary ingredient
		m_IngredientUseSoftSkills[1] = false;	// set 'true' to allow modification of the values by softskills on this ingredient
		
		//result
		// AddResult("");	// recipe result
		
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
    SRP_BarricadeKit_Kit kit;
    Class.CastTo(kit, ingredients[0]);
    bool canCraft = false;
    if (kit)
    {
      ItemBase slot;
      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_Nails"));
      canCraft |= (slot != NULL && slot.GetQuantity() >= m_RequiredNailsQuantity);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_WoodenPlanks"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredWoodenPlanks);

      Class.CastTo(slot, kit.FindAttachmentBySlotName("Material_MetalSheets"));
      canCraft &= (slot != NULL && slot.GetQuantity() >= m_RequiredMetalSheets);

      canCraft &= (kit.FindAttachmentBySlotName("Material_MetalWire") != NULL);
    }
		return canCraft;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		Debug.Log("Craft_SRP_Barricade_OptionsBase Recipe Do method called: " + m_Name,"recipes");
	}
};

class Craft_SRP_Barricade_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 70;
    m_RequiredMetalSheets = 5;
    m_RequiredWoodenPlanks = 20;
		m_Name = "Create Barricade - Wood Wall";		
		AddResult("SRP_Barricade_Wood_Kit");//add results here
	}
};

class Craft_SRP_BarricadeWithWindow_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 70;
    m_RequiredMetalSheets = 5;
    m_RequiredWoodenPlanks = 15;
		m_Name = "Create Barricade - Wall with Window";
		AddResult("SRP_BarricadeWithWindow_Wood_Kit");//add results here
	}
};

class Craft_SRP_WindowBarricade_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 35;
    m_RequiredMetalSheets = 1;
    m_RequiredWoodenPlanks = 5;
		m_Name = "Create Barricade - Window Short";
		AddResult("SRP_WindowBarricade_Wood_Kit");//add results here
	}
};

class Craft_SRP_WindowBarricadeTall_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 50;
    m_RequiredMetalSheets = 2;
    m_RequiredWoodenPlanks = 10;
		m_Name = "Create Barricade - Window Tall";
		AddResult("SRP_WindowBarricadeTall_Wood_Kit");//add results here
	}
};

class Craft_SRP_SpikeBarricade_Wood_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 50;
    m_RequiredMetalSheets = 2;
    m_RequiredWoodenPlanks = 20;
		m_Name = "Create Barricade - Wooden Spike";
		AddResult("SRP_SpikeBarricade_Wood_Kit");//add results here
	}
};

class Craft_SRP_BarricadeMetal_Kit extends Craft_SRP_Barricade_OptionsBase
{
	override void Init()
	{
    super.Init();
    m_RequiredNailsQuantity = 45;
    m_RequiredMetalSheets = 10;
    m_RequiredWoodenPlanks = 15;
		m_Name = "Create Barricade - Metal";
		AddResult("SRP_BarricadeMetal_Kit");//add results here
	}
};
