enum ECameraType
{
	eCT_EDITOR_NAVI = 0,
	eCT_GAME_CHARACTER,
	eCT_GAME_CUTSCENE,
	eCT_GAME_STATIC,
	eCT_GAME_HOUSING,	// The camera orbits a fixed point( center of house ) in the world.
	eCT_GAME_OBSERVER,	// The camera orbits a fixed point( center of house ) in the world.
	eCT_MANUAL,			// setting camera with position, view direction, up vector.
	//eCT_CHARACTER_CUSTOMAZING,	// customization mode.
	eCT_Count,
};
