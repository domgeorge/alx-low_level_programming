#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: point for string input
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i = i - 1;

	while (i >= 0)
	{
		_putchar(s[i--]);
	}

	_putchar('\n');
}
