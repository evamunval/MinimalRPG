#include "Player.h"

//FUNCTIONS
void setGold(Player p, int gold) {
	//everytime we open a chest or we loot a weapon

}

void setHealth(Player p, int hp) {
	//initialized btw 90 & 110
	p.maxHp = RandomNumber(90, 110);
}

void setStamina(Player p, int stamina) {
	//initialized btw 90 & 110
	p.stamina = RandomNumber(90, 110);

}

void setAgility(Player p, int agility) {


}

void Heal(Player p, int potions) {
	p.potions = 3;

	if (potions <= 3) {
		p.hp += 40;
		potions--;
	}
	else if (potions == 0 && potions <= 0){
		printf("You don't have potions!");
	}

}