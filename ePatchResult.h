enum ePatchResult
{
	ePR_OK = 0,								// �۾��� ���������� ����Ǿ��� ��.	(return true)

	ePR_NEWESTVERSION = 0,					// �ֽ� ����.

	ePR_SUCCEEDPATCHPROCESS,				// doPatch �ѹ� �� ������ ��.

	ePR_JOBCANCELED,						// ����� ��û���� ��ġ �۾� ��ҵ�.

	ePR_UNKWOWNERROR,						// ���� ���� �з� �ڵ�

	ePR_ERR_PARSE_CLIENTMETA,

	ePR_ERR_CHECK_INTEGRITYMETA,

	ePR_MAX,
};
