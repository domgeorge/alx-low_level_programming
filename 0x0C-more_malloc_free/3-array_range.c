#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 * @min: min value of array
 * @max: max value of array
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int i;
	int size;
	int *arr;

	size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(int));

	if (arr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
