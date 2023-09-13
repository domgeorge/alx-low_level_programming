#include "function-pointers.h"
#include <stdio.h>

/**
 * print_name -  prints a name
 * @name: pointer to char
 * @f: pointer to function of type char
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
