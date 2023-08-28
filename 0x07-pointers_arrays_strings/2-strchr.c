#include <stdio.h>
#include "main.h"

/**
 * _strchr -  find the first occurrence of character c in
 * the string s and return a pointer to that location
 * @s: the string pointer to search
 * @c: the character to locate
 * Return: outputs a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
