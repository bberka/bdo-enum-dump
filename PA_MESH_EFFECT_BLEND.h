enum PA_MESH_EFFECT_BLEND
{
	EB_NORMAL		= 0 ,
	EB_ADD			= 1 ,
	EB_MUL			= 2 ,
	EB_SUB			= 3 ,
	EB_SCR			= 4 ,
	EB_LIGHTEN		= 5 ,
	EB_DARKEN		= 6 ,
	//AlphaBlend
	EB_HAZE			= 7 ,
	EB_ALPHA_NOWEATHERCOLOR		= 8 ,	//weatherColor�� ������ ���� �ʴ� mode
	EB_LAST				,

	// �Ʒ����ʹ� ���� �ڵ忡 ���� �ʴɴ�.... ������ ��� �Ǵ°��� �˱����� �ڵ�...

	EB_NORMAL_INVERSE			= EB_NORMAL + 10,
	EB_ADD_INVERSE				= EB_ADD + 10,
	EB_MUL_INVERSE				= EB_MUL + 10,

	EB_NORMAL_BILLBOARD			= EB_NORMAL + 100 ,
	EB_ADD_BILLBOARD			= EB_ADD + 100 ,
	EB_MUL_BILLBOARD			= EB_MUL + 100 ,
	EB_SUB_BILLBOARD			= EB_SUB + 100 ,


	EB_NORMAL_YBILLBOARD		= EB_NORMAL + 200 ,
	EB_ADD_YBILLBOARD			= EB_ADD + 200 ,
	EB_MUL_YBILLBOARD			= EB_MUL + 200 ,
	EB_SUB_YBILLBOARD			= EB_SUB + 200 ,	
};
