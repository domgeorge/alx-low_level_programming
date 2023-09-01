#include "main.h"

/**
 * _strncat - funtion pointer to char pointers dest and src
 * @dest: pointer to char type
 * @src: pointer to char type
 * @n: carries the threshold for byte usage from src
 * Return: outputs the concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (original_dest);
}
