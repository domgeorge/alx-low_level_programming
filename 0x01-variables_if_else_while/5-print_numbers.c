#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: exit 0 success
 */

int main(void)
{
	int b;

	b = 0;
	while (b <= 9)
	{
		printf("%d", b);

		b++;
	}

	printf("\n");

	return (0);
}
