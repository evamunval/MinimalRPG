#pragma once
#include "GlobalVariables.h"

struct Player {
	int mapPosition[2];
	int gold;
	int hp;
	int maxHp;
	int stamina;
	int maxStamina;
	int agility;
	int potions;
	int maxPotions;
};


//FUNCTIONS
void setGold(Player p, int gold);
void setHealth(Player p, int hp);
void setStamina(Player p, int stamina);
void setAgility(Player p, int agility);
void Heal(Player p, int potions);