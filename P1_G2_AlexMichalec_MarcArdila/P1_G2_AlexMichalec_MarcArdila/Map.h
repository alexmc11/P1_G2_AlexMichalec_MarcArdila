#pragma once

enum difficulty {EASY, MEDIUM, HARD};
class Map

{
	int x;
	char map[5][5 * 2];
	difficulty Dificultad;
public:
	Map();
	~Map();
	void startMap();
	void Modify();
	void printMap();

};

