#include <stdio.h>
#include <stdlib.h>

/**
 * main - execute code
 *
 * Return: success is 0
 */

int main(void)
{
	char c;
	char C;

	c = 'a';
	C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C += 1;
	}

	putchar('\n');

	return (0);
}
