#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string pointer to char
 * Return: 0 if str is NULL and arr is NULL
 * arr is duplicate of str
 */

char *_strdup(char *str)
{
	char *arr;
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (str == NULL)
	{
		return (0);
	}

	arr = malloc((sizeof(char) * length) + 1);

	if (arr == NULL)
	{
		return (0);
	}

	while (i <= length)
	{
		arr[i] = str[i];
		i++;
	}

	return (arr);
}
