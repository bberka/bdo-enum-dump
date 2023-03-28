enum TrServer
{
	eTrServerOutsideBase=pa::eTrOutsideBase*2,
		//Traffic ����͸� ���α׷��� ���ؼ� �Ʒ� �ּ��� �����Ͻø� �ȵ˴ϴ�.
		//ScriptParsingStart

		eTrStopServiceReq,

		//Traffic ����͸� ���α׷��� ���ؼ� �Ʒ� �ּ��� �����Ͻø� �ȵ˴ϴ�.
		//ScriptParsingEnd
	eTrServerOutsideBaseEnd,


	// �ϳ��� H/W������ ���Ǵ� TR. ���� N/W�� Ÿ�� ������ �ʴ� ���̴�.
	eTrServerInsideBase=eTrServerOutsideBase+pa::eTrInsideBase,
		//Traffic ����͸� ���α׷��� ���ؼ� �Ʒ� �ּ��� �����Ͻø� �ȵ˴ϴ�.
		//ScriptParsingStart

		eTrDeliverComebackBoomerangReq,		// ���ƿ� �θ޶��� �����ض�.

		//Traffic ����͸� ���α׷��� ���ؼ� �Ʒ� �ּ��� �����Ͻø� �ȵ˴ϴ�.
		//ScriptParsingEnd
	eTrServerInsideBaseEnd
};
