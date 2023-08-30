#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the character
 * Return: base case ie end of string and increment by
 * 1 whiile calling recursively
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
