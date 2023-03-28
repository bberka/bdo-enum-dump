enum EModelHideType
{
	eMHT_None									= 0,
	eMHT_by_command								= 1 << 0,
	eMHT_by_basic_weapon_logic					= 1 << 1,
	eMHT_by_weapon_on_the_back					= 1 << 2,
	eMHT_by_primary_weapon_depenency			= 1 << 3,
	eMHT_by_event_costume						= 1 << 4,
	eMHT_by_head_hider							= 1 << 5,
	eMHT_by_hair_hand_hider						= 1 << 6,
	eMHT_by_cloak_hider							= 1 << 7,
	eMHT_by_hand_hider							= 1 << 8,
	eMHT_by_base_extra2_hider					= 1 << 9,
	eMHT_by_base_hair_hider						= 1 << 10,
	eMHT_by_base_hair_hand_base_extra0_hider	= 1 << 11,
	eMHT_by_weapon_in_hider						= 1 << 12,
	eMHT_by_carriageHorse						= 1 << 13,
	eMHT_by_hand_foot_helm_hider				= 1 << 14,
	eMHT_by_right_weapon_in_hider				= 1 << 15,
	eMHT_by_hand_foot_underwear_hider			= 1 << 16,
	eMHT_by_primary_weapon_on_the_back			= 1 << 17,
	eMHT_by_helmet_hider_button					= 1 << 18,
	eMHT_by_cloak_hider_button					= 1 << 19,
	eMHT_by_item_hair_hider						= 1 << 20,
};