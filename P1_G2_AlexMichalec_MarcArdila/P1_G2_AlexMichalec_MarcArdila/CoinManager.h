#pragma once
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
	CoinManager();
	~CoinManager();
	void GenCoins();
	void CoinPicker();

};

