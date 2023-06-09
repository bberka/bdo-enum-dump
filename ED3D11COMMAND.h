enum ED3D11COMMAND
{
	// ����� ������!: PADevicePlayer11.cpp�� ���ǵ� �Լ��������� �迭�� ������ ��ġ���Ѿ� ��.
	e11_OMSetRenderTargets = 0,
	e11_RSSetViewports,
	e11_ClearRenderTargetView,
	e11_ClearDepthStencilView,
	e11_IASetInputLayout,
	e11_IASetPrimitiveTopology,
	e11_IASetVertexBuffers,
	e11_IASetIndexBuffer,
	e11_VSSetConstantBuffers,
	e11_OMSetBlendState,
	e11_OMSetDepthStencilState,
	e11_RSSetState,
	e11_PSSetSamplers,
	e11_DrawInstancedIndirect,
	e11_DrawIndexedInstanced,
	e11_DrawIndexed,
	e11_Draw,
	e11_CopyResource,
	e11_GenerateMips,
	e11_ClearUnorderedAccessViewUint,
	e11_OMSetRenderTargetsAndUnorderedAccessViews,
	e11_CopyStructureCount,
	e11_MapResource0,
	e11_MapResource1,
	e11_MapResource2,
	e11_SwapChain_Present,
	e11_Flush,
	e11_EffectPass_Apply,
	e11_ShaderResVar_SetResource,
	e11_ShaderUAVVar_SetUnorderedAccessView,
	e11_ScalarVar_SetBool,
	e11_ScalarVar_SetInt,
	e11_ScalarVar_SetIntArray,
	e11_ScalarVar_SetFloat,
	e11_ScalarVar_SetFloatArray,
	e11_VectorVar_SetFloatVector,
	e11_VectorVar_SetFloatVectorArray,
	e11_VectorVar_SetIntVectorArray,
	e11_MatrixVar_SetMatrix,
	e11_MatrixVar_SetMatrixArray,
	e11_ConstantBuffer_SetConstantBuffer,
	e11_Dispatch,
	e11_DispatchIndirect,
#if 1 == __PA_DEVELOPMENT__
	e11_FontWrapper_DrawString,
#endif
	e11_RecordingLog,

	e11_ProfileStart,
	e11_ProfileEnd,

	e11_Null,
};
