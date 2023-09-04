#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input for grid
 * @height: input for grid
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int test;
	int i = 0;
	int j = 0;
	int k = 0;

	test = 0;
	if (width <= 0 || height <= 0)
		return (0);

	grid = malloc(height * sizeof(int *));
	if (grid == 0)
		return (0);
	while (i < height)
	{
		*(grid + i) = malloc(width * sizeof(int));
		if (*(grid + i) == 0)
		{
			test = 1;
			break;
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	if (test == 1)
	{
		while (k <= i)
		{
			free(*(grid + k));
			k++;
		}
		free(grid);
	}
	return (grid);
}
