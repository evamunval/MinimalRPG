#pragma once
#include "GlobalVariables.h"

struct Enemy {
	int mapPosition[2];
	bool isDead;
	int hp;
	int maxHp;
	int stamina;
	int maxStamina;
};

//FUNCTIONS
void setEnemyPos(Enemy e, int mapPosition[]);
void setState(Enemy e, bool isDead);
void setHealth(Enemy e, int hp);
void setStamina(Enemy e, int stamina);