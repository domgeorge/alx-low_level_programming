#include "main.h"

/**
 * _strncpy - funtion pointer to char pointers dest and src to copy a string
 * @dest: pointer to char type
 * @src: pointer to char type
 * @n: carries the threshold for byte usage from src
 * Return: outputs the concatenation
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}
