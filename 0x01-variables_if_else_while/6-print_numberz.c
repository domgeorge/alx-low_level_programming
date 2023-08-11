#include <stdio.h>

/**
 * main - entry point
 *
 * Return: exit 0 success
 */

int main(void)
{
	int c;

	c = 48;

	while (c <= 57)
	{
		putchar(c);

		c++;
	}

	putchar('\n');

	return (0);
}
