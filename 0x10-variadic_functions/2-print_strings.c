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
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(ap, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator)
		{
			printf("%s", separator);
		}
	}
	str = va_arg(ap, char *);

	if (str)
	{
		printf("%s\n", str);
	}
	else
	{
		printf("(nil)\n");
	}

	va_end(ap);
}
