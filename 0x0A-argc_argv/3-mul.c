#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: counts the number of parameters that enter the main function
 * @argv: pointer of array to pointers containing strings entering main
 * Return: 0 is success
 */

int main(int argc, char **argv)
{
	int n, ex;

	ex = 0;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		ex = 1;
	}
	else
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (ex);
}
