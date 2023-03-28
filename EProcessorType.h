enum EProcessorType
{
	eProcessor_None = 0,
	eProcessor_Home,				//PAProcessor_ClientHome
	eProcessor_Login,				//PAProcessor_ClientLogin
	eProcessor_ServerSelect,		//PAProcessor_ServerSelect
	eProcessor_Lobby,				//PAProcessor_Lobby
	eProcessor_Loading,				//PAProcessor_Loading
	eProcessor_Play,				//PAProcessor_ClientPlay

	//for Ocean, ����� Ocean�ʿ���
	eProcessor_CharacterViewer,		//PAProcessor_CharacterViewer
	eProcessor_SceneEdit,			//PAProcessor_SceneEdit
	eProcessor_Customization,		//PAProcessor_Lobby : Ocean ������ �ٷ� Ŀ���͸���¡�� �� �� �ֵ��� Processor_Lobby�� ���õ� �Լ����� ����ϹǷ� Processor_Lobby �Բ� ���
	eProcessor_Count,
};
