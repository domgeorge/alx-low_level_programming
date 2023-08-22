#include "main.h"

/**
 * _adigit - checks whether character is a digit
 * @s: character to check
 *
 * Return: 1 if digit 0 if not
 */
int _adigit(char s)
{
	return (s >= '0' && s <= '9');
}

/**
 * _atoi - converts string to integer
 * @s: pointer to string
 *
 * Return: integer values of string
 */
int _atoi(char *s)
{
	int i = 0, neg = 0, d;
	int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			neg++;
		}
		else if (_adigit(s[i]))
		{
			while (_adigit(s[i]))
			{
				d = (s[i] - '0');
				d = neg % 2 ? -d : d;
				num = num * 10 + d;
				i++;
			}
			break;
		}
		i++;
	}
	return (num);
}
