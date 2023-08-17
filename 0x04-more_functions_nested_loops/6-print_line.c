#include "main.h"

/**
 * print_line - outputs lines
 * @n: carries the integers
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		
		i++;
	}

	_putchar('\n');
}
