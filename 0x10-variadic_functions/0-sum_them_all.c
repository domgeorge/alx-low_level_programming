#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - variadic function that returns
 * the sum of all its parameters
 * @n: fixed argument
 * @...: variable number of arguments
 * Return: total is sum of all parameter and 0 if n is NULL
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;
	int total;

	if (n == 0)
		return (0);

	va_start(ap, n);

	total = 0;

	for (i = 0; i < n; i++)
	{
		total += va_arg(ap, int);

		va_end(ap);
	}

	return (total);
}
