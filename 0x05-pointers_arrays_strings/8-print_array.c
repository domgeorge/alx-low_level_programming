#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the elements of the pointed array
 * @a: points to array
 * @n: takes integer input for array size
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
