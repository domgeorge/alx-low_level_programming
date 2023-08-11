#include <stdio.h>

/**
 * main - entry point
 *
 * Return: exit 0 success
 */

int main(void)
{
	char a;
	char b;

	a = 48;
	b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}

	putchar('\n');

	return (0);
}
