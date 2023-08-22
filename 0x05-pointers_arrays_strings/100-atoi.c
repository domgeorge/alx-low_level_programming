#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * _atoi - converts integer to string
 * @s: pointer to integer
 * Return: outputs converted number
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			return (0);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
