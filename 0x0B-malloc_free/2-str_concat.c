#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string pointer to char
 * @s2: string pointer to char
 * Return: arr as the output
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	char *arr;
	char *nul = "";

	if (s1 == NULL)
	{
		s1 = nul;
	}
	if (s2 == NULL)
	{
		s2 = nul;
	}

	arr = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (arr == 0)
	{
		return (0);
	}

	strcpy(arr, s1);
	strcat(arr, s2);

	return (arr);
}
