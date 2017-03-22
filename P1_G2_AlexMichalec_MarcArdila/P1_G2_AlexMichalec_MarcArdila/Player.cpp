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
	do {
		Coords.x = rand() % map.NUM_ROWS;
		Coords.y = rand() % map.NUM_COLUMNS;
		map.md[Coords.x][Coords.y] = Pj;
	} while (map.md[Coords.x][Coords.y] = '$');
		
}

void Player::movement()
{

}