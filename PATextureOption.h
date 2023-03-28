enum PATextureOption
{
	PATextureOption_Default						= 1 << 0,
	PATextureOption_isRenderGBuffer				= 1 << 1,
	PATextureOption_isRenderOVR_Duplicator		= 1 << 2,
	PATextureOption_isRenderLongTermAOGenerate	= 1 << 3,
	PATextureOption_isRenderLight				= 1 << 4,
	PATextureOption_isRenderLightScatter		= 1 << 5,
	PATextureOption_isRenderLightShaft			= 1 << 6,
	PATextureOption_isRenderVolumeCloud			= 1 << 7,
	PATextureOption_isRenderVolumeCloudImposter	= 1 << 8,
	PATextureOption_isRenderOutDoorShadow		= 1 << 9,
	PATextureOption_isRenderDynamicShadow		= 1 << 10,
	PATextureOption_isRenderSelfShadow			= 1 << 11,
	PATextureOption_isRenderHDR					= 1 << 12,
	PATextureOption_isRenderGlare				= 1 << 13,
	PATextureOption_deferredShaderLevel0		= 1 << 14,
	PATextureOption_isUpscale					= 1 << 15,
	PATextureOption_isRenderGI					= 1 << 16,
	PATextureOption_isRenderSceneScatter		= 1 << 17,
	PATextureOption_isRenderShadowFull			= 1 << 18,
	PATextureOption_isRenderShadowLightInstance	= 1 << 19,
	// getPATextureOption_RenderOption ������Ʈ �ʼ�
};
