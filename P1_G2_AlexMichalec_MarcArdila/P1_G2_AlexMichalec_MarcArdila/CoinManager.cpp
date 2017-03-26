#include "CoinManager.h"
#include "Player.h"
#include <stdlib.h>


int coinrand;

class Map;
class Player;

CoinManager::CoinManager(Map a): mapa(a)
{
	
}


CoinManager::~CoinManager()
{
}

void CoinManager::GenCoins()
{
	VisibleCoins = ((3 * (mapa.NUM_COLUMNS * mapa.NUM_ROWS)) / 100) + (rand() % ((13 * (mapa.NUM_COLUMNS * mapa.NUM_ROWS)) / 100) - ((3 * (mapa.NUM_COLUMNS * mapa.NUM_ROWS)) / 100));
	TotalCoins = VisibleCoins;
	while (VisibleCoins > 0)
	{
		coins.x = rand() % mapa.NUM_ROWS;
		coins.y = rand() % mapa.NUM_COLUMNS;
			mapa.Modify(coins.y, coins.x, '$');
			VisibleCoins--;
		}
	
	}

	


void CoinManager::CoinPicker(Player & player)
{
	if (TotalCoins > 0)
		mapa.Modify(player.Coords.x, player.Coords.y, '@');

	else
		GenCoins();
}






