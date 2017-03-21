#include "Map.h"
#include <stdlib.h>
#include <iostream>


Map::Map() : md(new int*[NUM_ROWS])
{
	for (int i = 0; i < NUM_ROWS; i++) {

		md[i] = new int[NUM_COLUMNS];
	}

	
}


Map::~Map()
{
}

void Map::startMap()
{
}

void Map::Modify()
{
}

void Map::printMap()
{
	for (int i = 0; i < NUM_ROWS; i++) {

		for (int j = 0; j < NUM_COLUMNS; j++) {

			std::cout << md[i][j];
		}
	}
}
