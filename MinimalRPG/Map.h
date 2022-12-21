#pragma once
#include <cstdio>
#include "Player.h"
#include "Enemy.h"
#include "GlobalVariables.h"

///FUNCTIONS
void PrintMap(Player p);
void PlayerInput(Player p);
void HUDCombat(Player p, Enemy e);
void Combat(Player p, Enemy e);