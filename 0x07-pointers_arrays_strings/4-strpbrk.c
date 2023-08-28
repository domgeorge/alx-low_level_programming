#include <string.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: pointer to string to be searched
 * @accept: pointer to the set of bytes to search for
 * Return: NULL if no matching byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
