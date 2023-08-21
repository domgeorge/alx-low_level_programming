#include "main.h"

/**
 * puts2 - prints the every other character of the pointed string
 * @str: takes the input of the string variable
 */

void puts2(char *str)
{
	int shift = 0;
	int i = 0;
	char *a = str;
	int b;

	while (*a != '\0')
	{
		a++;
		shift++;
	}
	i = shift - 1;
	for (b = 0 ; b <= i ; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
