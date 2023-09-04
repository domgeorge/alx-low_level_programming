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
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == 0)
		return (0);

	while (i < height)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		i++;

		if (grid[i] == NULL)
		{
			while (j < i)
			{
				free(grid[j]);
				j++;
			}

			free(grid);
			return (NULL);
		}

		while (j < width)
		{
			grid[i][j] = 0;
			j++
		}
	}

	return (grid);
}
