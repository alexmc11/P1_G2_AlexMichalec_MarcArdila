#include <stdlib.h>
#include "CoinManager.h"
#include "Map.h"
#include "Player.h"
#include "Input.h"
#include <conio.h>
#include <iostream>
#include <time.h>




void main() {
	
	int dificultad;
	//Input::Key Tecla;
	//int puntuacion;
	srand(time(NULL));
	//int numMonedas = 30 * dificultad + rand() % (30 * dificultad * 2 - 30 * dificultad);
	
	std::cout <<"////////////////////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout <<"////////////////////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout <<"////////////////////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout <<"///////////////////////                                     ////////////////////////" << std::endl;
	std::cout <<"///////////////////////             COIN RACE               ////////////////////////" << std::endl;
	std::cout <<"///////////////////////                $$$                  ////////////////////////" << std::endl;
	std::cout <<"///////////////////////                                     ////////////////////////" << std::endl;
	std::cout <<"////////////////////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout <<"////////////////////////////////////////////////////////////////////////////////////" << std::endl;
	std::cout <<"////////////////////////////////////////////////////////////////////////////////////" << std::endl;

	std::cout << "INTRODUCE LA DIFICULTAD (1 PARA EASY, 2 PARA MEDIUM, 3 PARA HARD)" << std::endl;
	std::cin >> dificultad;

	//CONSTRUCTORES CLASES//

	Map mapa(dificultad);
	CoinManager CoinM(mapa);
	Player player(mapa);

	//LOOP DE JUEGO//

	//while (puntuacion != numMonedas) 
	//{
		
	//}
	
	CoinM.GenCoins();
	//CoinM.CoinPicker();
	player.pos();
	mapa.printMap();
}