#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid previously created
 * @grid: grid pointer
 * @height: takes input of integer
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(gird[i]);
		i++;
	}

	free(grid);
}