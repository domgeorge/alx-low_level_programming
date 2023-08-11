#include <stdio.h>

/**
 * main - entry point
 *
 * Return: exit 0 success
 */

int main(void)
{
	int b10;

	while (b10 < 10)
	{
		printf("%d", b10);

		b10++;
	}

	putchar('\n');

	return (0);
}
