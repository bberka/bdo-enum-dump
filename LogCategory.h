enum LogCategory
{
	// LogManager System			// ����� �������� ������
	LG_Absolute = 0,  // pa::LogManager::absoluteCategory,		// ������ ��� - ����� ��ġ�� �����ϸ� �ȵ�!

	//////////////////////////////////////////////////////////////////////////
	// Special ; ���⿡�� �Ժη� �߰����� ������

	LG_OutputDebugStringHook,							// ��ŷ�� OutputDebugString ( OutputDebugStringHooker �� ���� ���� )
	LG_OCEAN_LOG,										// ���ӿ� �ܼ� ( �̴� ��ȹ�ڿ��� ����Ǵ� ���� )

 	//////////////////////////////////////////////////////////////////////////
	// Standard

	LG_Engine_LOG,										// ���� ������
	//////////////////////////////////////////////////////////////////////////

	LG_Max
};
