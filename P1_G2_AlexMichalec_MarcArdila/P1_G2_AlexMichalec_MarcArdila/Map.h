#pragma once

enum difficulty {EASY, MEDIUM, HARD};
class Map

{
	 char **md;
	

public:
	int NUM_ROWS;
	int NUM_COLUMNS;
	Map();
	~Map();
	void startMap();
	void Modify(int column, int row, char newc);
	void printMap();

};

