#include "main.h"

/**
 * _strcat - funtion pointer to char pointers dest and src
 * @dest: pointer to char type
 * @src: pointer to char type
 * Return: outputs the concatenation
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
