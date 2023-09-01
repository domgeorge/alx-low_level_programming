#include <stdio.h>
#include "main.h"

/**
 *_strcpy - copys a string from a pointer into another pointer
 *@dest: buffer pointer
 *@src: string pointer
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';

	return (dest);
}
