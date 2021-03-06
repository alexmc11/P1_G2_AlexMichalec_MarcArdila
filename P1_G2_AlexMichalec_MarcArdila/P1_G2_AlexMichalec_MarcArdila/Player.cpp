#include "Player.h"
#include <conio.h>
#include <stdlib.h>
#include "Input.h"
#include "Map.h"
#include "CoinManager.h"

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

}

void Player::movement(Input::Key tecla)
{
	switch (tecla)
	{
	case Input::Key::NONE:
		break;
	case Input::Key::W:
		if (Coords.y > 0) {

			if (map.md[Coords.x][Coords.y - 1] == '$')
			{
				points++;
				//manager.VisibleCoins--;
			}
			Coords.y--;
			map.Modify(Coords.x, Coords.y, '@');
			map.Modify(Coords.x, Coords.y+1, '.');
		}
		break;
	case Input::Key::A:
		if (Coords.x > 0) {
			if (map.md[Coords.x - 1][Coords.y] == '$')
			{
				points++;
				//manager.VisibleCoins--;
			}
			Coords.x--;
			map.Modify(Coords.x, Coords.y, '@');
			map.Modify(Coords.x+1, Coords.y, '.');
		}
		break;
	case Input::Key::S:
		if (Coords.y < (map.NUM_ROWS - 1)) {
			if (map.md[Coords.x][Coords.y + 1] == '$')
			{
				points++;
				//manager.VisibleCoins--;
			}

			Coords.y++;
			map.Modify(Coords.x, Coords.y, '@');
			map.Modify(Coords.x, Coords.y-1, '.');
		}
		break;
	case Input::Key::D:
		if (Coords.x < (map.NUM_COLUMNS - 1)) {
			
			if (map.md[Coords.x+1][Coords.y] == '$')
			{
				points++;
				//manager.VisibleCoins--;
			}
			Coords.x++;
			map.Modify(Coords.x, Coords.y, '@');
			map.Modify(Coords.x-1, Coords.y, '.');
		}
		break;

	default:
		break;
	}
}

