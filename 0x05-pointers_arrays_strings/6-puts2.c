#include "main.h"

/**
 * puts2 - prints the every other character of the pointed string
 * @str: takes the input of the string variable
 */

void puts2(char *str)
{
	int shift = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		shift++;
	}
	l = shift - 1;
	for (z = 0 ; z <= l ; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
