#pragma once

enum EGameState {
	GameStateInTheCity = 0,
	GameStateChooseMap,
	GameStateChooseChannel, 
	GameStateInTheMap,
};

enum EDirection {
	DirectionL = 0,
	DirectionR = 1,
	DirectionU = 2,
	DirectionD = 3
};

struct Position {
	Position() : x(0), y(0), z(0) {}
	Position(int _x, int _y, int _z) : x(_x), y(_y), z(_z) {}
	int x;
	int y;
	int z;
};
