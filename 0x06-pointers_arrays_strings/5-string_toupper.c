#include "main.h"

/**
 * string_toupper - converts strings to its uppercase
 * @s: placeholder string to converted
 * Return: gives the output
 */

char *string_toupper(char *s)
{
	char *ret = s;

	for (; *s; s++)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s += 'A' - 'a';
		}
	}

	return (ret);
}
