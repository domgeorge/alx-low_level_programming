#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: static argument for pointer to string input of type char
 * @n: static argument for int
 * @...: variable number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str == 0)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}

	printf("\n");

	va_end(ap);
}
