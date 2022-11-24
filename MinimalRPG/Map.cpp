#include "Map.h"

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