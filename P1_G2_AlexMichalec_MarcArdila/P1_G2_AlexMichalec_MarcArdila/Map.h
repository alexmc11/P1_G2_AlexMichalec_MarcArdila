#pragma once

enum difficulty {EASY, MEDIUM, HARD};
class Map

{
	 int **md;
	 int NUM_ROWS;
	 int NUM_COLUMNS;

public:
	Map();
	~Map();
	void startMap();
	void Modify();
	void printMap();

};

