#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * _isnumber - checks if string is a number
 * @s: string
 * Return: on success 1
 * if not a number, 0 is returned.
 */

int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;

	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));

		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * main - entry point
 * @argc: counts the number of parameters that enter the main function
 * @argv: pointer of array to pointers containing strings entering main
 * Return: 0 is success
 */

int main(int argc, char **argv)
{
	int i, n, ex;

	ex = 0, n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
			{
				n += atoi(argv[i]);
			}
			else
			{
				ex = 1;
			}
		}
	}
	if (ex == 0)
	{
		printf("%i\n", n);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (ex);
}
