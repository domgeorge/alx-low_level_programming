#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: placeholder for malloc arguments
 * Return: pointer to the allocated memory all
 */

void *malloc_checked(unsigned int b)
{
	void *all;

	all = malloc(b);

	if (all == NULL)
	{
		exit(98);
	}

	return (all);
}
