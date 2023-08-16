#include <stdio.h>

/**
  * main - computes and outputs sum of all multiples of 3 or 5 below 1024
  *
  * Return: void
  */

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
