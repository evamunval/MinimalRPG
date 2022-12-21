#include "Enemy.h"


//FUNCTIONS
void setEnemyPos(Enemy e, int mapPosition[]) {
	 
}

void setState(Enemy e, bool isDead) {
	//enemy spawned alive
}

void setHealth(Enemy e, int hp) {
	//initialize btw 60 & 90
	e.hp = RandomNumber(60, 90);
}

void setStamina(Enemy e, int stamina) {
	e.stamina = RandomNumber(60, 90);
}