#include "CoinManager.h"
#include <stdlib.h>


int coinrand;

class Map;

CoinManager::CoinManager(Map a): mapa(a)
{
	VisibleCoins = ((3/100) * (mapa.NUM_COLUMNS * mapa.NUM_ROWS)) + rand() % (((13/100)*(mapa.NUM_ROWS * mapa.NUM_COLUMNS)) - ((3 / 100) * (mapa.NUM_COLUMNS * mapa.NUM_ROWS)));
}


CoinManager::~CoinManager()
{
}

void CoinManager::GenCoins()
{
	while (VisibleCoins > 0)
	{
		coins.x = rand() % mapa.NUM_ROWS;
		coins.y = rand() % mapa.NUM_COLUMNS;
		if (mapa.md[coins.x][coins.y] != '$') {
			mapa.Modify(coins.y, coins.x, '$');
			VisibleCoins--;
		}
	}
	
}

void CoinManager::CoinPicker()
{

}





