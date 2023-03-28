enum PATextureMipmapLoadOption
{
	MIPMAP_LOAD_DEFAULT	= 0,
	MIPMAP_LOAD_MORE1	= -1,		// �ؽ��� �ɼǿ� ����� �Ѵܰ� �ø��ų� �Ҷ�
	MIPMAP_LOAD_MORE2	= -2,
	MIPMAP_LOAD_FULL	= -100,		// �ؽ��� �ɼǿ� ���� ���� �ִ�ġ�� �ε�
	
	MIPMAP_LOAD_NORMAL	= 1,		// Ư�� �ؽ��� ���� ����, �����ɼǿ� ���� �ε��� ��ŵ�Ҷ� ���
	MIPMAP_LOAD_SPEC	= 2,
	MIPMAP_LOAD_EM		= 3,
	MIPMAP_LOAD_HEADAO	= 4,
	MIPMAP_LOAD_DETAIL	= 5,		// _deferredShaderLevel == 0(High) �϶��� full mipmap loading
};
