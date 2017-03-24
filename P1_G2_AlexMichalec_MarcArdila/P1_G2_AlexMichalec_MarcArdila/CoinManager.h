#pragma once
#include "Map.h"
struct Coin
{
	int x;
	int y;
};

class CoinManager
{

	int VisibleCoins;
	Coin coins;


public:
	CoinManager(Map a);
	~CoinManager();
	void GenCoins();
	void CoinPicker(Player &player);
	Map &mapa;

};

