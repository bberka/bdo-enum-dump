enum ECharacterRenderMode
{
	eCRM_Body = 0,
	eCRM_Cull_CCW,
	eCRM_Face_Customize,	// PC Face
	eCRM_Eye_Customize,		// PC Eye
	eCRM_Fixture,			// fixture, ĳ���� Skin�� selfShadow �帮���� �ʴ� Ÿ�����ε� ���(customize handle ��)
	eCRM_Decal_Soft,		// Body �� ����, �����ɼǿ��� Soft Blend �� ���� (�ӿʵ��� ��ġ�� Ÿ��)
	eCRM_Hair,				// �������ÿ��� eCRM_Hair_ ���
	eCRM_EdgeRenderMax,
	// eCRM_EdgeRenderMax ���� edge �׸��� ���� ( isCharacterNormalRenderMode )

	eCRM_Decal,
	eCRM_WaterMask,

	// ================ ������ ���� ================
	eCRM_Hair_Deferred,		// isCharacterHairRenderMode, eCRM_Hair ����Ʈ ������
	eCRM_Hair_Forward,
	eCRM_Hair_Forward_Near,
	eCRM_Hair_Depth,
	eCRM_HelmMask,
	eCRM_Hair_AlphaBlendLow,		// ����ȭ��忡�� �����ؽ��ĸ� ����� ���� ����.(�ݼ��� ���忡������ ����)

	eCRM_Edge,				// isCharacterNormalRenderMode, _targetedFlag
	eCRM_Cloaking,			// isCloakingBody

	eCRM_Lighten,			// CharacterShaderEffect::CSET_Lighten
	eCRM_Particle,			// CharacterShaderEffect::CSET_Particle
};
