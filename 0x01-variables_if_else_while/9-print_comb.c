#include <stdio.h>

/**
 * main - entry point
 *
 * Return: exit success 0
 */

int main(void)
{
	int n;

	n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}

	putchar('\n');

	return (0);
}
