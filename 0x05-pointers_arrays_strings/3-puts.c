#include "main.h"

/**
 * _puts - outputs the string parsed into it by the pointer
 * @str: points to the str variable
 */

void _puts(char *str)
{
	while (*str != '\0') 
	{
	_putchar(*str);

	str++;
	}
	_putchar('\n');
}
