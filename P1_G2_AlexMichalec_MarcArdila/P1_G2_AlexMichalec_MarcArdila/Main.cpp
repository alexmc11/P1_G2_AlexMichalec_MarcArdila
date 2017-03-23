#include <stdlib.h>
#include "CoinManager.h"
#include "Map.h"
#include "Player.h"
#include "Input.h"
#include <conio.h>
#include <iostream>



void main() {
	int dificultad;
	std::cout << "INTRODUCE LA DIFICULTAD (1 PARA EASY, 2 PARA MEDIUM, 3 PARA HARD)" << std::endl;
	std::cin >> dificultad;
	Map mapa(dificultad);
	mapa.printMap();
}


