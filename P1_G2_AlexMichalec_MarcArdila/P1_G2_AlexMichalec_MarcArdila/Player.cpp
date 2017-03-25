#include "Player.h"
#include <conio.h>
#include <stdlib.h>
#include "Input.h"

char Pj = '@';


Player::Player(Map m): map(m)
{
}

Player::~Player()
{
}

void Player::pos()
{
	Coords.x = rand() % map.NUM_ROWS;
	Coords.y = rand() % map.NUM_COLUMNS;
	if (map.md[Coords.x][Coords.y] == '$')
	{
		while (map.md[Coords.x][Coords.y] == '$') {
			Coords.x = rand() % map.NUM_ROWS;
			Coords.y = rand() % map.NUM_COLUMNS;
		}
	}
	else
		map.md[Coords.x][Coords.y] = Pj;
}

void Player::movement()
{
	
}