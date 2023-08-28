#include <stdio.h>
#include "main.h"

/**
 * print_chessboard -  prints the chessboard
 * @a: pointer to an array of characters
 */

void print_chessboard(char (*a)[8])
{
	int row = 0;

	while (row < 8)
	{
		int col = 0;

		while (col < 8)
		{
			printf("%c", a[row][col]);
			col++;
		}

		row++;
		printf("\n");
	}
}
