enum ResourceType
{
	eRT_TypeUnknown				= 0,
	eRT_Skeleton				= 1,
	eRT_Animation				= 2,
	eRT_SkinMesh				= 3,

	eRT_Level_SectorInfo		= 4,
	eRT_Level_Terrain			= 5,
	eRT_Level_Object			= 6,
	eRT_Level_Light				= 7,
	eRT_Level_Tree				= 8,
	eRT_Level_RegionBox			= 9,
	eRT_Level_Probe				= 10,
	eRT_Level_House				= 11,
	eRT_Level_MorphObject		= 12,
	eRT_Level_VolumeFog			= 13,
	eRT_Level_KeyFrameObject	= 14,
	eRT_Level_SoundObject		= 15,
	eRT_Level_FieldEffect		= 16,
	eRT_Level_CollisionMesh		= 17,
	eRT_Level_3DFont			= 18,
	eRT_Level_ProceduralObject	= 19,
	eRT_Level_VolumeDecal		= 20,

	eRT_Cutscene				= 21,

	eRT_SkinMeshMT				= 22,
	eRT_Level_CombineSectorInfo = 23,
	
	eRT_EffectData				= 24,
	eRT_Level_Object_Lightmap	= 25,
	eRT_Level_Object_Terrain	= 26,
	eRT_Level_FarTreeList		= 27,
	eRT_Level_FarTerrain		= 28,
	eRT_Level_FarLight			= 29,
	eRT_Level_CombineSectorInfo_Event = 23,

	eRT_EditorData_Group		= 50,	
	eRT_Count,
};
