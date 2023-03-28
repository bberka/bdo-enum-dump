enum edgeCondition
	eS_in = 1<<0,
	eE_in = 1<<1,

	eOutside = 0,
	eExit = eS_in,
	eEntry = eE_in,
	eInside = eS_in | eE_in,
};
