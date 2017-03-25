#pragma once
#include "Map.h"
#include <conio.h>
#include "Input.h"
struct coord 
{
	int x;
	int y;
};

class Player
{
	int points;


public:
	Player(Map m);
	~Player();
	void pos();
	void movement(Input::Key tecla);
	Map &map;
	coord Coords;
	
};

