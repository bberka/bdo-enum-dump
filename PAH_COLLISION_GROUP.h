enum PAH_COLLISION_GROUP
{
	//////////////////////////////////////////////////////////////////////////
	// �Ϲ� �ø��� �׷�
	//////////////////////////////////////////////////////////////////////////
	PAHCG_FIRST						= 0,
	PAHCG_COLLISION_DETECTION		= 0,

	// �ε����� �ٲ�� �ȵǴ� �κ�.
	// ����, ������Ʈ ����.
	PAHCG_COLLISION_FREE			= 1,
	PAHCG_DYNAMIC_OBJECT			= 2,			
	PAHCG_STATIC_LEVELOBJECT		= 3,	// �ε��� ����.
	PAHCG_CARRIER_LEVELOBJECT		= 4,			
	PAHCG_TREE_LEVELOBJECT			= 5,	// �ε��� ����.		
	PAHCG_TREE_DYNAMIC_LEVELOBJECT	= 6,	// �ε��� ����.		
	PAHCG_TERRAIN					= 7,	// �ε��� ����. �Ϲ� Terrain
	PAHCG_INIVISIBLE				= 8,	// �ε��� ����. ��Ȯ���� LEVELOBJECT_INVISIBLE
	PAHCG_RIVEROBJECT				= 9,	// �ε��� ����. ��(����) 
	PAHCG_RIVEROBJECT_INVISIBLE		= 10,	// �ε��� ����. ��(����) INVISIBLE - �������߱�
	PAHCG_OTHER_PC_CHARACTER		= 11,
	PAHCG_SELF_CHARACTER_NO_CARRIER = 12,
	PAHCG_DYNAMIC_LEVELOBJECT		= 13,	// �ε��� ����.
	PAHCG_ANTI_DYNAMICS				= 14,	// �ε��� ����.
	// ~ �ε����� �ٲ�� �ȵǴ� �κ�.

	// ĳ���� ����.
	PAHCG_COLLISION_FREE_CHARACTER,			// � �Ͱ��� �浹���� �ʴ� ĳ����. Targetting(CrossHair)�� �Ǵ� ������.
	PAHCG_FLUIDIC_CHARACTER,				// ĳ���� ������ �浹�� ���õǰ�, �����ϰ��� �浹��.
	PAHCG_FLUIDIC_CHARACTER_NO_CARRIER,		// ĳ���� ������ �浹�� ���õǰ�, �����ϰ��� �浹��. CARRIER_LEVELOBJECT�� �������� ����.
	PAHCG_SELF_CHARACTER,					// Self ĳ����. Normal ĳ����, ������ �浹��.
	PAHCG_SELF_CHARACTER_RIDING_PHYSICS,	// ���ü Ȥ�� ����������Ʈ�� ���� Ż�Ϳ� ž���� Self ĳ����. �ٸ� ���ü ž�� �Ұ�. ANTI_DYNAMICS�� �浹��.
	PAHCG_NORMAL_CHARACTER,					// �ٸ� PC, ����, �Ϻ� NPC ��.
	PAHCG_RESERVED_0,
	PAHCG_RESERVED_1,

	
	// ���ο� �׷��߰��� �� ������ �߰��� �ּ���!

	//////////////////////////////////////////////////////////////////////////
	// Ư�� �ø��� �׷� [ Havok �� PhysX �� �޸� ��Ÿ�ӿ� Mask �� �����ϴ� ����� �����Ƿ�(?) ]
	// * PAPhysicsManager::CollisionGroupMask �� ����� ��ü�Ѵ�
	//  - PhysX �� ���߿� CollisionGroup ���� �����Ͽ� CollisionMask �� �����ϴ� ������� API �� �����Ǿ� ����
	//  - Havok �� �̸� CollisionGroup �� �����ϴµ� ������ �� CollisionMask �� �����ؾ� ��. API �� CollisionMask �� ���� �ʰ� CollisionGroup(��Ȯ���� CollisionInfo, CollisionInfo = Layer + ...) �� �ް� �Ǿ�����
	PAHCG_SPECIAL_CollisionGroupMask_Character,
	PAHCG_SPECIAL_CollisionGroupMask_Terrain,
	PAHCG_SPECIAL_CollisionGroupMask_TerrainAndLevelObject,
	PAHCG_SPECIAL_CollisionGroupMask_TerrainAndStaticLevelObject,
	PAHCG_SPECIAL_CollisionGroupMask_TerrainAndStaticAndDynamicLevelObject,
	PAHCG_SPECIAL_CollisionGroupMask_RiverObject,
	PAHCG_SPECIAL_CollisionGroupMask_TerrainAndStaticAndDynamicLevelObjectAndRiver,
	PAHCG_SPECIAL_CollisionGroupMask_TerrainAndLevelObjectAndRiver,
	PAHCG_SPECIAL_CollisionGroupMask_LevelObject,

	// �ݵ�� �������� ����
	PAHCG_COUNT,
};
