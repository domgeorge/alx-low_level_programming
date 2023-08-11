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

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
			c += 1;
	}

	putchar('\n');

	return (0);
}
