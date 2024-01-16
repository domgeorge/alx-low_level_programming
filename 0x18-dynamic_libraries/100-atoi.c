#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 *
 * Return: returns integer value
 */
int _atoi(char *s)
{
	int i;
	int npc = 0;
	int c;
	int d = 1;
	int num = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && c > 0)
			break;
		if (s[i] == '-')
			npc--;
		if (s[i] == '+')
			npc++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		num += ((s[i - 1] - '0') * d);
		i--;
		c--;
		d *= 10;
	}
	if (npc >= 0)
	{
		num *= 1;
	} else
	{
		num *= -1;
	}
	return (num);
}
