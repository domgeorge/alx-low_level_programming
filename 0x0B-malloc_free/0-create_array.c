#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array to create
 * @c: character to initialize the array with
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}

