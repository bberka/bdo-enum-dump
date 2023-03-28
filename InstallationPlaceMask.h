enum InstallationPlaceMask
{
	PMASK_INDOOR_WALL										= ( 1 << 24 ) | ( 1 << gc::OGROUP_INOUTDOOR_WALLDECORATIONS ) | ( 1 << gc::OGROUP_INDOOR_WALLDECORATIONS ) | ( 1 << gc::OGROUP_CURTAIN ),
	PMASK_INDDOR_FLOOR										= ( 2 << 24 ) | ( 1 << gc::OGROUP_INOUTDOOR_FURNITURES ) | ( 1 << gc::OGROUP_INDOOR_FURNITURES ) | ( 1 << gc::OGROUP_TABLEDECORATIONS ) | ( 1 << gc::OGROUP_CARPET ) | ( 1 << gc::OGROUP_CHANDELIER ),
	PMASK_OUTDOOR_WALL										= ( 3 << 24 ) | ( 1 << gc::OGROUP_INOUTDOOR_WALLDECORATIONS ) | ( 1 << gc::OGROUP_OUTDOOR_WALLDECORATIONS ),
	PMASK_OUTDOOR_FLOOR										= ( 4 << 24 ) | ( 1 << gc::OGROUP_INOUTDOOR_FURNITURES ) | ( 1 << gc::OGROUP_OUTDOOR_FURNITURES ),
	PMASK_INSIDECONVEX_TERRAIN								= ( 5 << 24 ) | ( 1 << gc::OGROUP_PLANTS ),
	PMASK_HOUSEOBJECT_CARPET								= ( 6 << 24 ) | ( 1 << gc::OGROUP_INDOOR_FURNITURES ) | ( 1 << gc::OGROUP_TABLEDECORATIONS ) | /*( 1 << OGROUP_CARPET ) |*/ ( 1 << gc::OGROUP_CHANDELIER ),
	PMASK_HOUSEOBJECT_TABLE									= ( 7 << 24 ) | ( 1 << gc::OGROUP_TABLEDECORATIONS ) | ( 1 << gc::OGROUP_CARPET ),
	PMASK_HOUSEOBJECT_TABLEDECORATION						= ( 8 << 24 ) | ( 1 << gc::OGROUP_CARPET ),
	PMASK_TENT												= ( 9 << 24 ) | 0,	// ��Ʈ ����
	PMASK_OUTSIDE_CONVEX									= ( 10 << 24 ) | 0,	// �Ͽ콺 ������ �ٱ���
	PMASK_OUTSIDE_CORNER									= ( 11 << 24 ) | 0,	// �ڳ� �����ߴµ� ��ŷ������ �ٸ� ����ΰ��
	PMASK_CANNOTINSTALLABLEPLACE							= ( 12 << 24 ) | 0,	// ��ġ������ ��ġ �������� ���� ���� ���
	PMASK_OUTSIDE_TABLECORNER								= ( 13 << 24 ) | 0,	// �ڳ� �����ߴµ� ��ŷ������ �ٸ� ����ΰ��
	// ���� �߰�

	PMASK_NONE												= ( 255 << 24 ) | 0,
};
