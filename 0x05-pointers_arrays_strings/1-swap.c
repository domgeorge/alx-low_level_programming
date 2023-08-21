#include "main.h"

/**
 * swap_int - swaps the values of the pointed variables
 * @a: points to the variable a
 * @b: points to the variable b
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
