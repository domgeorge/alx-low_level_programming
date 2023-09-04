#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string pointer to char
 * @s2: string pointer to char
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0, len2 = 0;

	while (*(s1 + len1))
	{
		len1++;
	}
	while (*(s2 + len2))
	{
		len2++;
	}

	arr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (arr == 0)
	{
		return (0);
	}

	for (i = 0; i < len1; i++)
	{
		*(s + i) = *(s1 + i);
	}

	for (i = 0, j = len1; i <= len2; j++, i++)
	{
		*(s + j) = *(s2 + i);
	}

	return (arr);
}
