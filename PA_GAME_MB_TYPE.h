enum PA_GAME_MB_TYPE
{
	PA_GAME_MT_NONE = PA_MESSAGE_TYPE_NONE,
	PA_GAME_MT_OK = PA_MESSAGE_TYPE_OK,
	PA_GAME_MT_COMPLETE_DUNGEON,						// ���� �Ϸ�(�׽�Ʈ����.)
	PA_GAME_MT_GIVEUP_DUNGEON,							// ���� ����
	PA_GAME_MT_RESTART_DUNGEON,							// ���� �����
	PA_GAME_MT_INVITE_PARTY,
	PA_GAME_MT_PRODUCTION_CONFIRM,						// ���� Ȯ��
	PA_GAME_MT_PRODUCTION_RESULT,						// ���� ��� Ȯ��
	PA_GAME_MT_PRODUCTION_PRINT_ERRNO,					// ���� ���н� errNo ���.
	PA_GAME_MT_DISASSEMBLE_CONFIRM,						// ���� Ȯ��
	PA_GAME_MT_DISASSEMBLE_RESULT,						// ���� ��� Ȯ��
	PA_GAME_MT_DISASSEMBLE_PRINT_ERRNO,					// ���� ���н� errNo ���.
	PA_GAME_MT_ENCHANT_CONFIRM,							// ��ȭ Ȯ��
	PA_GAME_MT_ENCHANT_RESULT,							// ��ȭ ��� Ȯ��
	PA_GAME_MT_ENCHANT_PRINT_ERRNO,						// ��ȭ ���н� errNo ���.
	PA_GAME_MT_EXCHANGE_WITH_PLAYER_REQUEST,			// ���� �ŷ� ��û
	
	PA_GAME_MT_EXCHANGE_WITH_PLAYER_RESPONSE_REQUEST,	// ���� �ŷ� ��û�� �޾�����.
	PA_GAME_MT_EXCHANGE_WITH_PLAYER_COMPLETE_CONFIRM,	// ���� �ŷ� �Ϸ� Ȯ��
	PA_GAME_MT_EXCHANGE_WITH_PLAYER_PRINT_ERRNO,		// ���� �ŷ� ���� �����޼��� ���.

	PA_GAME_MT_DELETEITEM_CONFIRM,						// �������� ������ Ȯ��.
	PA_GAME_MT_DELETEMONEY_CONFIRM,						// ������ ������ Ȯ��.
	PA_GAME_MT_BURNITEM_CONFIRM,						// �������� �¿�� Ȯ��.

	PA_GAME_MT_SOCKET_PUSH_CONFIRM,						// ����� ���Ͽ� ������ Ȯ��.
	PA_GAME_MT_SOCKET_POP_CONFIRM,						// ����� ���Ͽ��� �ı���ų�� Ȯ��.

	PA_GAME_MT_CANCEL_INSTALL_TENT,						// ��Ʈ ��ġ�� ���
	PA_GAME_MT_CANCEL_INSTALL_INSTALLATION,				// ��ġ�� ��ġ�� ���
	PA_GAME_MT_CANCEL_REMOVE_INSTALLATION_TO_STORAGE,	// ��ġ�� ���� ( ȸ�� -> ��Ʈâ�� )
	PA_GAME_MT_CHECK_INSTALL_INSTALLATION,				// ��ġ�� ��ġ Ȯ��
	PA_GAME_MT_CHECK_INSTALL_TENT,						// ��Ʈ ��ġ Ȯ��

	PA_GAME_MT_REPAIR_ALL_EQUIP,						// �����ϰ� �ִ� ����� ��ü ����
	PA_GAME_MT_REPAIR_UNIT_EQUIPWINDOW,					// ���â �������.
	PA_GAME_MT_REPAIR_UNIT_INVENTORYWINDOW,				// �κ��丮â �������.

	PA_GAME_MT_PUSHMONEY_TO_WAREHOUSE_CONFIRM,			// â���� �� ����
	PA_GAME_MT_POPMONEY_FROM_WAREHOUSE_CONFIRM,			// â������ �� ã��

	PA_GAME_MT_PUSHMONEY_TO_EXPRESS_CONFIRM,			// ������ �� ������

	PA_GAME_MT_RENT_INNROOM_CONFIRM,					// ���� �Ӵ� Ȯ��â
	PA_GAME_MT_INIT_SKILLTYPE_ALL,						// ��ų Ÿ�� �� ��ü �ʱ�ȭ Ȯ��â
	PA_GAME_MT_INIT_SKILLTYPE_POINT,					// ��ų Ÿ�� �� ����Ʈ �ʱ�ȭ Ȯ��â
};
