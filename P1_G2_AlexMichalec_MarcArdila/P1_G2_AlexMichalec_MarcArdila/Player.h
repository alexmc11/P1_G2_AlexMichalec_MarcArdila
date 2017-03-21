#pragma once
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
	Player();
	~Player();
	void pos();
	void movement();

};

