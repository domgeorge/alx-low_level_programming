#include "function_pointers.h"

/**
 * int_index - searches for an integer returns the index
 * of the first element for which the cmp function does not return 0
 * @array: pointer to array of type int
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element and
 * -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) > 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
