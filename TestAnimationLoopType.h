enum TestAnimationLoopType
{
	TestAnimationLoopType_Once,				// �ѹ���							[ A->B->C ]
	TestAnimationLoopType_Loop,				// ���� �ִ� �ݺ�					[ A->B->C===>A->B->C===>... ]
	TestAnimationLoopType_Link,				// End Branch�� ����					[ A->A2->A3->...->An ] -; A2 is linked with A. A3 is linked with A2 ]
	TestAnimationLoopType_DressPose,		// �ѹ� �÷��� �� Dress Pose ��		[ A->B->C->DressPose ]
};
