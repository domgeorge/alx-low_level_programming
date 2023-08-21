#include "main.h"

/**
 * puts2 - prints the every other character of the pointed string
 * @str: takes the input of the string variable
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
