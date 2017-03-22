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

void CoinManager::CoinPicker()
{
}

void CoinManager::GenCoins()
{
	while (VisibleCoins > 0) {
		//xrand
		//yrand
		// miras si hay moneda
		//si hay moenda nada
		// si no hay modify y visiblecoins-1
		

}


