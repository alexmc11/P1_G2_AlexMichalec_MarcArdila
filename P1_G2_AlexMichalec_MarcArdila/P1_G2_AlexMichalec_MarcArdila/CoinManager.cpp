#include "CoinManager.h"
#include <stdlib.h>

int coinrand;

class Map;

CoinManager::CoinManager(Map a): mapa(a)
{
	VisibleCoins = rand();
}


CoinManager::~CoinManager()
{
}

void CoinManager::GenCoins()
{
	while (VisibleCoins > 0)
	{

	}
}

void CoinManager::CoinPicker()
{
}





