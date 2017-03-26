#pragma once
#include "Map.h"
#include "Player.h"
struct Coin
{
	int x;
	int y;
};

class CoinManager
{

	int VisibleCoins;
	Coin coins;
	int TotalCoins;

public:
	CoinManager(Map a);
	~CoinManager();
	void GenCoins();
	void CoinPicker(Player &player);
	Map &mapa;

};

