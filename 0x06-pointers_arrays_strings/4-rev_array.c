#include "main.h"

/**
 * reverse_array - reverses the element of the array
 * @a: pointer to integer array a
 * @n: argument for array size
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
	}
}
