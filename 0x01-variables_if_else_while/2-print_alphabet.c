#include <stdio.h>
#include <stdlib.h>

/**
 * main - code run starts
 *
 * Return: terminates 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);

		c += 1;
	}

	putchar('\n');

	return (0);
}
