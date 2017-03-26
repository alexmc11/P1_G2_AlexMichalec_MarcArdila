#include <stdlib.h>
#include "CoinManager.h"
#include "Map.h"
#include "Player.h"
#include "Input.h"
#include <conio.h>
#include <iostream>
#include <time.h>
#include <cstdlib>




void main() {
	
	int dificultad;
	Input::Key Tecla;
	int puntuacion = 0;
	srand(time(NULL));
	
	
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
	int numMonedas = 30 * dificultad + rand() % (30 * dificultad * 2 - 30 * dificultad);
	//CONSTRUCTORES CLASES//

	Map mapa(dificultad);
	CoinManager CoinM(mapa);
	Player player(mapa);
	player.pos();
	CoinM.GenCoins();
	system("cls");
	

	//LOOP DE JUEGO//


	
	
	//CoinM.CoinPicker();
	
	
