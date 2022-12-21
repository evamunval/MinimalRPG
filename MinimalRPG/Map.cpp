#include "Map.h"
enum combatActions{ ATTACK, DEFEND, REST};

///FUNCTIONS
//The printing of the map
void PrintMap(Player p) {
	//TOP PART
	for (int i = 0; i < 5; i++) {
		printf(" ___ ");
	}
	printf("\n");

	//PRINT ROWS
	for (int i = 0; i < 5; i++) {
		//TOP PART
		for (int j = 0; j < 5; j++) {
			printf("|   |");
		}
		printf("\n");
		//MIDDLE PART
		//Set the player in the position
		for (int j = 0; j < 5; j++) {
			char characterToPrint = ' ';
			if (p.mapPosition[0] == j && p.mapPosition[1] == i)
				characterToPrint = 'P';
			printf("| %c |", characterToPrint);
		}
		printf("\n");
		//BOTTOM PART
		for (int j = 0; j < 5; j++) {
			printf("|___|");
		}
		printf("\n");
	}
}

void PlayerInput(Player p){
	scanf_s("%c", &input);

	if (input == 'W' || input == 'A' || input == 'S' || input == 'D' || input == 'P') {
		//MOVEMENT
		switch (input)
		{
		case 'W':
			break;
		case 'S':
			break;
		case 'A':
			break;
		case 'D':
			break;
		}
		//agility = 0, enemies move random, and your agility will be reset
	}
	else
		printf("Invalid action!\n");
}

void HUDCombat(Player p, Enemy e) {
	printf("------COMBAT------\n");
	printf("--Enemy--\n");
	//HP
	printf("[==========] ? HP\n", e.hp, e.maxHp);
	printf("[==========] ? Stamina\n", e.hp, e.maxHp);
	//Stamina


	printf("--Player--\n");
	//HP
	printf("[==========]  %d / %d HP\n", p.hp, p.maxHp);
	//Stamina
	printf("[>>>>>>>>>>]  %d / %d Stamina\n", p.stamina, p.maxStamina);

	printf("Potions: %d / %d", p.potions, p.mapPosition);
	printf("_____________________________________________");
	printf("A -> Attack\n");
	printf("D -> Defend\n");
	printf("R -> Rest\n");
	printf("P -> Potion\n");
	do {
		printf("Enter your action:\n");
		scanf_s("%c", &input);
	} while (!e.isDead);
}

void Combat(Player p, Enemy e) {
	switch (combatActions)
	{
	case ATTACK:
		//consume stamina for a set amount of damage
			printf("Enter the attack value (Max %d):\n", p.maxStamina);
			scanf_s("%d", &p.stamina);

			if (p.stamina < e.stamina) {
				p.hp = p.maxHp - e.stamina;
				e.stamina -= e.maxStamina;
			}
			else(p.stamina > e.stamina) {
				e.hp = e.maxHp - p.stamina;
				p.stamina -= p.maxStamina;
			}

		break;
	case DEFEND:
		//regenerate 25% stamina & mitigates 75% of the incoming damage
		break;
	case REST:
		//regenerate 100% stamina but leaves you vulnerable to attacks
		break;
	}
}