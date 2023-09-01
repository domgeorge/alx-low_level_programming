#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counts the number of parameters that enter the main funtion
 * @argv: pointer of array to pointers containing strings entering main
 * Return: 0 is success
 */

int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
