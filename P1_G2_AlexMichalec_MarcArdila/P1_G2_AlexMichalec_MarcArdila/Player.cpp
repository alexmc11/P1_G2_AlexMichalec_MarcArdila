#include "Player.h"
#include <conio.h>
#include <stdlib.h>
#include "Input.h"
#include "Map.h"

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

void Player::movement(Input::Key tecla)
{
	switch (tecla)
	{
	case Input::Key::NONE:
		break;
	case Input::Key::W:
		if (Coords.y != 0) {

			Coords.y--;
		}
		break;
	case Input::Key::A:
		break;
	case Input::Key::S:
		break;
	case Input::Key::D:
		break;
	case Input::Key::ENTER:
		break;
	case Input::Key::ESC:
		break;
	default:
		break;
	}
}