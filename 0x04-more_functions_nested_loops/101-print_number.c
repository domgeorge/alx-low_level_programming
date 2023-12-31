#include "main.h"

/**
 * print_number - print an integer
 * @n: takes integer input
 */

void print_number(int n)
{
	int len, res, i, temp, expo;

	res = n;
	expo = len =  1;

	if (res < 0)
	{
		res *= -1;
		_putchar('-');
	}

	temp = res;

	while (temp >= 10)
	{
		len++;
		temp /= 10;
	}

	for (i = 1; i < len; i++)
	{
		expo *= 10;
	}

	while (expo > 1)
	{
		_putchar((res / expo) % 10 + '0');
		expo /= 10;
	}

	_putchar((res % 10) + '0');
}
