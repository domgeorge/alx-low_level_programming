#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to char
 * @f: pointer to void function of type char
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
