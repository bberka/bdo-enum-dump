enum StringFormatDataType
{
	eStringFormatDataType_String = 0,	// �Ϲ� ���ڿ�
	eStringFormatDataType_NormalData,	// �Է����� ��ȯ�Ǵ� ������

	// �ڵ忡�� ���Է����ִ� �����͵�
	eStringFormatDataType_PreFix_KeyBind,		// ActionKey, UIKey
	eStringFormatDataType_PreFix_CharacterInfo,	// CharacterStaticStatus Info
	eStringFormatDataType_PreFix_ExchangeInfo,	// ExchangeSourceStaticStatus Info
	eStringFormatDataType_PreFix_ItemInfo,		// ItemEnchantStaticStatus Info
	eStringFormatDataType_PreFix_InnerStr,		// InnerStringTable Info

	eStringFormatDataType_Count,
};
