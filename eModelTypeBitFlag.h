enum eModelTypeBitFlag
{
	eMTB_hide_me_if_weapon_on_the_back			= 1 << 0,
	eMTB_hide_me_if_no_primary_weapon			= 1 << 1,	// �������Ⱑ �ֹ��⿡ �������� ���
	eMTB_hide_base_hair_hand					= 1 << 2,	// ���� �����а� ����
	eMTB_hide_head_all							= 1 << 3,	// ���
	eMTB_hide_hand_foot							= 1 << 4,	// �̺�Ʈ�ڽ���
	eMTB_hide_cloak								= 1 << 5,	// ����
	eMTB_hide_hand								= 1 << 6,	// ����
	eMTB_hide_base_extra2						= 1 << 7,
	eMTB_hide_base_hair							= 1 << 8,
	eMTB_hide_base_hair_hand_base_extra0		= 1 << 9,	// ���� ������, ����, �������� �����.
	eMTB_hide_weapon_in							= 1 << 10,
	eMTB_hide_hand_foot_helm					= 1 << 11,
	eMTB_hide_right_weapon_in					= 1 << 12,  
	eMTB_hide_hand_foot_underwear				= 1 << 13, 
	eMTB_hide_me_if_primary_weapon_on_the_back	= 1 << 14,
	eMTB_do_not_hide_by_user_option				= 1 << 15,
	eMTB_hide_item_hair							= 1 << 16,

	eMTB_vertexBufferUnloadable					= 1 << 24,
};
