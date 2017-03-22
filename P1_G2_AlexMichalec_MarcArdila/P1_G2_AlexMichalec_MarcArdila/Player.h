#pragma once
#include "Map.h"
struct coord 
{
	int x;
	int y;
};

class Player
{
	coord Coords;
	int points;


public:
	Player(Map m);
	~Player();
	void pos();
	void movement();
	Map &map;
};

