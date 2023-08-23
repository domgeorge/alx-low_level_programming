#include "main.h"

/**
 * _strcmp - compares the both string character by character
 * @s1: pointer being compared
 * @s2: pointer being compared
 * Return: 0 if both strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
