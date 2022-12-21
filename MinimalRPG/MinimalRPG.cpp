// MinimalRPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdio>
#include "Map.h"
#include "Player.h"
#include "Enemy.h"
#include "GlobalVariables.h"
enum GameScene { START, COMBAT, CHEST, POTIONS, GAMEOVER };

int main()
{
	srand(time(NULL));
	GameScene currentScene = GameScene::START;
	bool exitGame = false;


		//GAME LOOP
		switch (currentScene)
		{
		case GameScene::START:
			PrintMap(p);
			//Inicialization of the player in the position (2, 3)
			p.mapPosition[0] = 2;
			p.mapPosition[1] = 3;

			printf("Enter your action:");
			scanf_s("%c", &input);
			break;
		case GameScene::COMBAT:
			HUDCombat(p, e);
			break;
		case GameScene::CHEST:
			break;
		case GameScene::POTIONS:
			
			break;
		case GameScene::GAMEOVER:
			break;
		}
}
