enum EProcessorInputMode
{
	eProcessorInputMode_GameMode			= 0,		// Character Control Mode
	eProcessorInputMode_UiMode				= 1,		// Ui Control Mode
	eProcessorInputMode_ChattingInputMode	= 2,
	eProcessorInputMode_MailInputMode		= 3,
#ifdef _PAWORK_LOGIN_PROCESS_SEPARATION_
	eProcessorInputMode_Lobby				= 4,
#endif//#ifdef _PAWORK_LOGIN_PROCESS_SEPARATION_
	eProcessorInputMode_KeyCustom			= 5,		// Ű Ŀ���͸����� ���
	eProcessorInputMode_KeyCustomizing		= 6,		// Ű Ŀ���͸����� Ű �Է� �����...
	eProcessorInputMode_UiMode_NotInput		= 7,		// w,a,s,d ���콺 Ŭ�� ��� �Ұ��� ���� Ư�� ui�� ���� ��� �����̸� �ȵɶ� �������( �⺻�����δ� ä�ð��� �Ѵ�. )
	eProcessorInputMode_UiControlMode		= 8,

	eProcessorInputMode_Undefined			= 9,		// Default Value And Count
};
