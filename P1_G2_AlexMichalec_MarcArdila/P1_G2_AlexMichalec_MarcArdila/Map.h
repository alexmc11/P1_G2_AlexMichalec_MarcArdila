#pragma once

enum difficulty {EASY, MEDIUM, HARD};
class Map

{

	difficulty Dificultad;
public:
	Map();
	~Map();
	void startMap();
	void Modify();
	void printMap();

};

