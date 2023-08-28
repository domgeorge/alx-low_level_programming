#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: pointer to 2D array
 * @size: diagonal to add
 */

void print_diagsums(int *a, int size)
{
	int i, sumrow, sumcol;

	sumrow = sumcol = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		sumrow += a[i];
	}
	for (i = size - 1; i < (size * size - 1); i += size - 1)
	{
		sumcol += a[i];
	}
	printf("%d, %d\n", sumrow, sumcol);
}
