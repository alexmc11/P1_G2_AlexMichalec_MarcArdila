#include "CoinManager.h"
#include <stdlib.h>

int coinrand;

class Map;

CoinManager::CoinManager() : VisibleCoins(rand() % (0.13*(NUM_COLUMNS * NUM_ROWS)+3);
{
}


CoinManager::~CoinManager()
{
}

void CoinManager::GenCoins(Map &m)
{
	while (VisibleCoins > 0) {

		for (int i = 0; i < m.NUM_ROWS; i++)
		{
			for (int j = 0; j < NUM_COLUMNS; j++) {
				coinrand = rand() % 2;
				if (coinrand == 0)
					m.md[i][j] = m.md[i][j];
				if (coinrand == 1 && m.md[i][j] != '$') {
					m.md[i][j] = '$';
					VisibleCoins--;
				}
			}

		}
	}

}

void CoinManager::CoinPicker()
{
}
