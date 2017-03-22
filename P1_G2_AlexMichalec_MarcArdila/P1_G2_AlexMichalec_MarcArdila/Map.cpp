#include "Map.h"
#include <stdlib.h>
#include <iostream>


Map::Map(int diff)
{
	
	NUM_ROWS = 5 * diff + rand() % (5 * diff * 2 - 5 * diff);
	NUM_COLUMNS = 5 * diff + rand() % (5 * diff * 2 - 5 * diff);
	md = new char*[NUM_ROWS];
	for (int i = 0; i < NUM_ROWS; i++) {

		md[i] = new char[NUM_COLUMNS];
	}

	
}


Map::~Map()
{
}

void Map::startMap()
{
	for (int i = 0; i < NUM_ROWS; i++) {
		for (int j = 0; j < NUM_COLUMNS; j++)
		{
			md[i][j] = '.';
		}
	}
}

void Map::Modify(int column, int row, char newc)
{
	md[row][column] = newc;
}



void Map::printMap()
{
	for (int i = 0; i < NUM_ROWS; i++) {

		for (int j = 0; j < NUM_COLUMNS; j++) {

			std::cout << md[i][j];
		}
	}
}
