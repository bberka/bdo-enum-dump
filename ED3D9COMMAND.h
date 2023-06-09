enum ED3D9COMMAND
{
	// ����� ������!: PADevicePlayer9.cpp�� ���ǵ� �Լ��������� �迭�� ������ ��ġ���Ѿ� ��.
	eAddRef = 0,
	eRelease,
	eDrawPrimitive,
	eDrawIndexedPrimitive,
	eSetStreamSource,
	eSetStreamSourceFreq,
	eSetVertexDeclaration,
	eSetIndices,
	eTestCooperativeLevel,
	eEvictManagedResources,
	eBeginScene,
	eEndScene,
	eBeginStateBlock,
	eSetCursorProperties,
	eSetDialogBoxMode,
	eReset,
	ePresent,
	eUpdateSurface,
	eUpdateTexture,
	eStretchRect,
	eColorFill,
	eSetRenderTarget,
	eSetDepthStencilSurface,
	eClear,
	eSetTransform,
	eMultiplyTransform,
	eSetViewport,
	eSetMaterial,
	eSetLight,
	eLightEnable,
	eSetClipPlane,
	eSetRenderState,
	eEndStateBlock,
	eSetClipStatus,
	eSetTexture,
	eSetTextureStageState,
	eSetSamplerState,
	eValidateDevice,
	eSetPaletteEntries,
	eSetCurrentTexturePalette,
	eSetScissorRect,
	eSetSoftwareVertexProcessing,
	eSetNPatchMode,
	eDrawPrimitiveUP,
	eDrawIndexedPrimitiveUP,
	eProcessVertices,
	eSetFVF,
	eSetVertexShader,
	eSetPixelShader,
	eDrawRectPatch,
	eDrawTriPatch,
	eDeletePatch,
	eSetGammaRamp,
	eSetCursorPosition,
	eSetVertexShaderConstantF,
	eSetVertexShaderConstantI,
	eSetVertexShaderConstantB,
	eSetPixelShaderConstantF,
	eSetPixelShaderConstantI,
	eSetPixelShaderConstantB,

	eLockVertexBuffer,
	eLockIndexBuffer,
	eLockTexture,
	eDrawTextA,
	eDrawTextW,
	eQueryIssue,
	eQueryGetDataLoop,

	// effect
	eEF_SetTechnique,
	eEF_Begin,
	eEF_BeginPass,
	eEF_CommitChanges,
	eEF_EndPass,
	eEF_End,
	eEF_SetTexture,
	eEF_SetBool,
	eEF_SetBoolArray,
	eEF_SetInt,
	eEF_SetIntArray,
	eEF_SetFloat,
	eEF_SetFloatArray,
	eEF_SetVector,
	eEF_SetVectorArray,
	eEF_SetMatrix,
	eEF_SetMatrixArray,
	eEF_SetMatrixTranspose,
	eEF_SetMatrixTransposeArray,

	eRecordingLog,

	eProfileStart,
	eProfileEnd,

	eNull,
}; // enum ED3D9COMMAND
