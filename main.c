#include <stdio.h>

#define TABLE_SIZE 8

/*
int initTable (int table[TABLE_SIZE][TABLE_SIZE]);
int displayTable (int **table);
char intToChess (int value)
*/

// FUNCTIONS
int initTable (int table[TABLE_SIZE][TABLE_SIZE])
{
	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		for (int j = 0; j < TABLE_SIZE; ++j)
		{
			table[i][j] = -1;
		}
	}
}

int displayTable (int table[TABLE_SIZE][TABLE_SIZE])
{
	// First Line
	printf("|");
	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		printf("---|");
	}
	printf("\n");

	// Table
	for (int i = 0; i < TABLE_SIZE; ++i)
	{
		printf("|");
		for (int j = 0; j < TABLE_SIZE; ++j)
		{
			printf(" %d |", table[i][j]);
		}
		printf("\n");
		printf("|");
		for (int i = 0; i < TABLE_SIZE; ++i)
		{
			printf("---|");
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}

char intToChess (int value)
{
	switch(value) {
		case -1:

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