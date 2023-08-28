#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: the receiving pointer memory
 * @src: the pointer memory area
 * @n: integer carrying amount of data to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (original_dest);
}
