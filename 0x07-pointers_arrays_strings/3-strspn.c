#include <string.h>
#include "main.h"

/**
 * _strspn - return the length of the prefix substring in s
 * that consists only of characters from the set accept
 * @s: pointer to string to be search
 * @accept: set of characters to be considered as valid
 * Return: outputs the length of the prefix substring count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}

	return (count);
}
