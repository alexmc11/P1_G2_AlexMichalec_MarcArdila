#pragma once


class Map

{
	 
	

public:
	int NUM_ROWS;
	int NUM_COLUMNS;
	Map(int diff);
	~Map();
	void startMap();
	void Modify(int column, int row, char newc);
	void printMap();
	char **md;

};

