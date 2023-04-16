#include <stdio.h>

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
	// First Line
	printf("|");
	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		printf("----|");
	}
	printf("\n");

	// Table
	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		printf("|");
		for (int j = 0; j < TABLE_SIZE; ++j)
		{
			printf(" %s |", intToChess(table[i][j]) );
		}
		printf("\n");
		printf("|");
		for (int i = 0; i < TABLE_SIZE; ++i)
		{
			printf("----|");
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}

/*
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
			return "♔";
		break;

		// White Queen
		case 11 :
			return "♕";
		break;
		
		// White Rook
		case 12 :
			return "♖";
		break;

		// White Bishop
		case 13 :
			return "♗";
		break;

		// White Knight
		case 14 :
			return "♘";
		break;

		// White Pawn
		case 15 :
			return "♙";
		break;

	// BLACK
		// Black King
		case 20 :
			return "♚";
		break;

		// Black Queen
		case 21 :
			return "♛";
		break;
		
		// Black Rook
		case 22 :
			return "♜";
		break;

		// Black Bishop
		case 23 :
			return "♝";
		break;

		// Black Knight
		case 24 :
			return "♞";
		break;

		// Black Pawn
		case 25 :
			return "♟︎";
		break;
		
		// Error
		default :
			return "?";
		break;
	}
}
*/

char *intToChess (int value)
{
	switch(value) {
		// Empty Space
		case 0 :
			return "  ";
		break;

	// WHITE
		// White King
		case 10 :
			return "wK";
		break;

		// White Queen
		case 11 :
			return "wQ";
		break;
		
		// White Rook
		case 12 :
			return "wR";
		break;

		// White Bishop
		case 13 :
			return "wB";
		break;

		// White Knight
		case 14 :
			return "wH";
		break;

		// White Pawn
		case 15 :
			return "wP";
		break;

	// BLACK
		// Black King
		case 20 :
			return "bK";
		break;

		// Black Queen
		case 21 :
			return "bQ";
		break;
		
		// Black Rook
		case 22 :
			return "bR";
		break;

		// Black Bishop
		case 23 :
			return "bB";
		break;

		// Black Knight
		case 24 :
			return "bH";
		break;

		// Black Pawn
		case 25 :
			return "bP";
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
	int table[TABLE_SIZE][TABLE_SIZE];

	initTable(table);
	displayTable(table);

	return 0;
}