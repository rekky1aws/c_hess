#include <stdio.h>
#include "bool.h"

#define TABLE_SIZE 8

// PROTOTYPES
int initTable (int table[TABLE_SIZE][TABLE_SIZE]);
int displayTable (int table[TABLE_SIZE][TABLE_SIZE]);
char *intToChess (int value);


// FUNCTIONS
int initTable (int table[TABLE_SIZE][TABLE_SIZE])
{
	int base[TABLE_SIZE][TABLE_SIZE] = {
		{22,24,23,21,20,23,24,22},
		{25,25,25,25,25,25,25,25},
		{00,00,00,00,00,00,00,00},
		{00,00,00,00,00,00,00,00},
		{00,00,00,00,00,00,00,00},
		{00,00,00,00,00,00,00,00},
		{15,15,15,15,15,15,15,15},
		{12,14,13,11,10,13,14,15}
	};

	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		for (int j = 0; j < TABLE_SIZE; ++j)
		{
			table[i][j] = base[i][j];
		}
	}

	return 0;
}

int displayTable (int table[TABLE_SIZE][TABLE_SIZE])
{
	// 
	printf("|---|---|---|---|---|---|---|---|---|---|\n");
	printf("| \033[1;32m\\\033[0m | \033[1;32mA\033[0m | \033[1;32mB\033[0m | \033[1;32mC\033[0m | \033[1;32mD\033[0m | \033[1;32mE\033[0m | \033[1;32mF\033[0m | \033[1;32mG\033[0m | \033[1;32mH\033[0m | \033[1;32m/\033[0m |\n");

	// First Line
	printf("|");
	for (int i = 0; i < TABLE_SIZE+2; ++i)
	{
		printf("---|");
	}
	printf("\n");

	// Table
	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		printf("| \033[1;32m%d\033[0m |", i+1);
		for (int j = 0; j < TABLE_SIZE; ++j)
		{
			printf(" %s |", intToChess(table[i][j]) );
		}
		printf(" \033[1;32m%d\033[0m |", i+1);
		printf("\n");
		printf("|");
		for (int i = 0; i < TABLE_SIZE+2; ++i)
		{
			printf("---|");
		}
		printf("\n");
	}

	printf("| \033[1;32m/\033[0m | \033[1;32mA\033[0m | \033[1;32mB\033[0m | \033[1;32mC\033[0m | \033[1;32mD\033[0m | \033[1;32mE\033[0m | \033[1;32mF\033[0m | \033[1;32mG\033[0m | \033[1;32mH\033[0m | \033[1;32m\\\033[0m |\n");

	// First Line
	printf("|");
	for (int i = 0; i < TABLE_SIZE+2; ++i)
	{
		printf("---|");
	}
	printf("\n");

	return 0;
}

char *intToChess (int value)
{
	switch(value) {
		// Empty Space
		case 0 :
			return " ";
		break;

	// WHITE
		// White King
		case 10 :
			return "\033[1;34mK\033[0m";
		break;

		// White Queen
		case 11 :
			return "\033[1;34mQ\033[0m";
		break;
		
		// White Rook
		case 12 :
			return "\033[1;34mR\033[0m";
		break;

		// White Bishop
		case 13 :
			return "\033[1;34mB\033[0m";
		break;

		// White Knight
		case 14 :
			return "\033[1;34mH\033[0m";
		break;

		// White Pawn
		case 15 :
			return "\033[1;34mP\033[0m";
		break;

	// BLACK
		// Black King
		case 20 :
			return "\033[1;31mK\033[0m";
		break;

		// Black Queen
		case 21 :
			return "\033[1;31mQ\033[0m";
		break;
		
		// Black Rook
		case 22 :
			return "\033[1;31mR\033[0m";
		break;

		// Black Bishop
		case 23 :
			return "\033[1;31mB\033[0m";
		break;

		// Black Knight
		case 24 :
			return "\033[1;31mH\033[0m";
		break;

		// Black Pawn
		case 25 :
			return "\033[1;31mP\033[0m";
		break;
		
		// Error
		default :
			return "?";
		break;
	}
}

// MAIN
int main ()
{
	// Variables Initialisation
	int table[TABLE_SIZE][TABLE_SIZE];
	char sC, dC;
	int sourceLine, destLine, sourceCol, destCol;

	// Boolean to check if one of the player won the game
	bool winFlag = FALSE;

	// Initializing pieces positions in table
	initTable(table);

	// do {
		displayTable(table);

		// Inputing the source
		printf("\nInput the source : ");
		scanf("%c%d", &sC, &sourceLine );

		// Translating source input to numbers
		sourceCol = (int) sC - 97;
		sourceLine--;

		// Debug to see what's returned.
		printf("Col : %c (= %d), Line : %d\n", sC, sourceCol, sourceLine);

	// } while (winFlag == TRUE);

	

	return 0;
}