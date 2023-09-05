#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count in main
 * @av: arguments passed to main
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int length, posi;
	char *arr;
	int i = 0;
	int j = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	while (i < ac)
	{
		posi = 0;
		while (av[i][posi])
			posi++;
		length += posi + 1;
		i++;
	}
	arr = malloc((length + 1) * sizeof(char));

	if (arr == 0)
		return (0);

	while (j < ac)
	{
		posi = 0;
		while (av[j][posi])
		{
			*(arr + k) = av[j][posi];
			k++;
			posi++;
		}
		*(arr + k) = '\n';
		k++;
		j++;
	}
	*(arr + k) = '\0';
	return (arr);
}
