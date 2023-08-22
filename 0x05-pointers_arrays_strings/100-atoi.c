#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts the str into ingeter
 * @str: str pointer for input
 * Return: integer
 */

int _atoi(char *str)
{
	int n = 0;
	int sign = 1;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i])
	{
		n = n * 10 + str[i] - '0';
		i++;
	}

	return (sign * n);
}
