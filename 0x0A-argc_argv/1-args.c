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
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
