#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: n bytes of string s2
 * Return: pointer to allocated memory of s1 + n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0, l2 = 0;

	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	if (n >= l2)
		n = l2;

	ptr = malloc(l1 + n + 1);

	if (ptr == 0)
		return (0);

	for (i = 0; i < l1; i++)
		*(ptr + i) = *(s1 + i);

	for (i = 0, j = l1; i < n; j++, i++)
		*(ptr + j) = *(s2 + i);

	*(ptr + j) = '\0';

	return (ptr);
}
