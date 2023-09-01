#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: pointer to the buffer memory area
 * @b: constant byte
 * @n: the memory area
 * Return: outputs the pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *original = s;

	while (n > 0)
	{
		*s = b;

		s++;

		n--;
	}

	return (original);
}
