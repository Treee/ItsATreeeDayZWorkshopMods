modded class Hologram
{
  override string GetProjectionName(ItemBase item)
	{
    if (item && item.IsPlacingKit())
    {
      return item.GetKitItemName();
    }
    return super.GetProjectionName(item);
	}

	override EntityAI PlaceEntity( EntityAI entity_for_placing )
	{
    // If we are placing our kits
		if ( entity_for_placing.IsInherited( SRP_KitBase ))
		{
      //If the kit we are placing can affect pathing
      if( entity_for_placing.CanAffectPathgraph() )
      { 
        // update the navemesh
        entity_for_placing.SetAffectPathgraph( true, false );            
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, entity_for_placing);
      }
      // return this entity for placing
      return entity_for_placing;
		}
    // pass through super call
    EntityAI ent = super.PlaceEntity(entity_for_placing);
		return ent;
	}

  // Building anywhere override
  override void EvaluateCollision(ItemBase action_item = null)
	{	
    EntityAI itemInHands = m_Player.GetItemInHands();
		if (IsCollidingGPlot())
    {
			SetIsColliding(true);
      return;
    }
    else if (itemInHands && itemInHands.IsInherited(SRP_KitBase)) // if the item in our hands is our kit
    {
      // ignore collision
      SetIsColliding(false);
      return;
    }
    else 
    {
      SetIsColliding(false);
      return;
    }
    super.EvaluateCollision(action_item);
	}

  override protected vector GetProjectionEntityPosition( PlayerBase player )
	{
		float min_projection_dist;
		float max_projection_dist; 
		m_ContactDir = vector.Zero;
		vector min_max[2];
		float projection_radius = GetProjectionRadius();
		float camera_to_player_distance = vector.Distance( GetGame().GetCurrentCameraPosition(), player.GetPosition() );

		if (projection_radius < SMALL_PROJECTION_RADIUS) // objects with radius smaller than 1m
		{
			min_projection_dist = SMALL_PROJECTION_RADIUS;
			max_projection_dist = SMALL_PROJECTION_RADIUS * 2;
		}
		else
		{
			min_projection_dist = projection_radius;
			max_projection_dist = projection_radius * 2;
			max_projection_dist = Math.Clamp(max_projection_dist, SMALL_PROJECTION_RADIUS, LARGE_PROJECTION_DISTANCE_LIMIT);
		}
		
		vector from = GetGame().GetCurrentCameraPosition();
		//adjusts raycast origin to player head approx. level (limits results behind the character)
		if ( DayZPlayerCamera3rdPerson.Cast(player.GetCurrentCamera()) )
		{
			vector head_pos;
			MiscGameplayFunctions.GetHeadBonePos(player,head_pos);
			float dist = vector.Distance(head_pos,from);
			from = from + GetGame().GetCurrentCameraDirection() * dist;
		}
		
		vector to = from + ( GetGame().GetCurrentCameraDirection() * ( max_projection_dist + camera_to_player_distance ) );
		vector contact_pos;
		set<Object> hit_object = new set<Object>;

		DayZPhysics.RaycastRV(from, to, contact_pos, m_ContactDir, m_ContactComponent, hit_object, player, m_Projection, false, false, ObjIntersectFire);
		
		//! will not push hologram up when there is direct hit of an item
		// if (hit_object.Count() > 0 && hit_object[0].IsInherited(InventoryItem))
		// {
		// 	contact_pos = hit_object[0].GetPosition();
		// }

		static const float raycastOriginOffsetOnFail = 0.25;
		static const float minDistFromStart = 0.01;
		// Camera isn't correctly positioned in some cases, leading to raycasts hitting the object directly behind the camera
		if ((hit_object.Count() > 0) && (vector.DistanceSq(from, contact_pos) < minDistFromStart))
		{
			from = contact_pos + GetGame().GetCurrentCameraDirection() * raycastOriginOffsetOnFail;
			DayZPhysics.RaycastRV( from, to, contact_pos, m_ContactDir, m_ContactComponent, hit_object, player, m_Projection, false, false, ObjIntersectFire );
		}
		
		if ((hit_object.Count() > 0) && hit_object[0].IsInherited(Watchtower))
			contact_pos = CorrectForWatchtower( m_ContactComponent, contact_pos, player, hit_object[0] );

		float player_to_projection_distance = vector.Distance( player.GetPosition(), contact_pos );
		vector player_to_projection_vector;

		//hologram is at min distance from player
		if ( player_to_projection_distance <= min_projection_dist )
		{
			player_to_projection_vector = contact_pos - player.GetPosition();
			player_to_projection_vector.Normalize();
			//prevents the hologram to go underground/floor while hologram exceeds min_projection_dist
			player_to_projection_vector[1] = player_to_projection_vector[1] + PROJECTION_TRANSITION_MIN;
			
			contact_pos = player.GetPosition() + (player_to_projection_vector * min_projection_dist);
			SetIsFloating(true);
		}
		//hologram is at max distance from player
		else if ( player_to_projection_distance >= max_projection_dist )
		{
			player_to_projection_vector = contact_pos - player.GetPosition();
			player_to_projection_vector.Normalize();
			//prevents the hologram to go underground/floor while hologram exceeds max_projection_dist
			player_to_projection_vector[1] = player_to_projection_vector[1] + PROJECTION_TRANSITION_MAX;
			
			contact_pos = player.GetPosition() + (player_to_projection_vector * max_projection_dist);
			SetIsFloating(true);
		}
		//hologram is between min and max distance from player
		else
		{
			SetIsFloating(false);
		}
		m_FromAdjusted = from;
		
		#ifdef DEVELOPER
		DrawDebugArrow(min_projection_dist, max_projection_dist);
		if (DiagMenu.GetBool(DiagMenuIDs.DM_HOLOGRAM))
		{
			Debug.DrawSphere(GetProjectionPosition(), 0.1, 0x99FF0000, ShapeFlags.ONCE|ShapeFlags.TRANSP|ShapeFlags.NOOUTLINE);
		}
		#endif
		
		return contact_pos;
	}
};