// MinimalRPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

#include "Map.h"
#include "Player.h"

int RandomNumber(int min, int max) {
	return rand() % (max - min + 1) + min;
}

int main()
{
    srand(time(NULL));
	Player player;
	//Inicialization of the player in the position (2, 3)
	player.mapPosition[0] = 2;
	player.mapPosition[1] = 3;


	//GAME LOOP
	PrintMap(player);
}


