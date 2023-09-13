#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: pointer to array of type int
 * @size: array size
 * @action: pointer to void funtion
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != 0 && size != 0 && array != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

}
