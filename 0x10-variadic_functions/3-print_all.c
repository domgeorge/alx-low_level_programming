#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * tchar - prints variadic argument char
 * @lst: variadic list
 */
void tchar(va_list lst)
{
	printf("%c", va_arg(lst, int));
}
/**
 * tint - prints variadic argument int
 * @lst: variadic list
 */
void tint(va_list lst)
{
	printf("%i", va_arg(lst, int));
}
/**
 * tfloat - prints variadic argument float
 * @lst: variadic list
 */
void tfloat(va_list lst)
{
	printf("%f", va_arg(lst, double));
}
/**
 * tstring - prints variadic argument string
 * @lst: variadic list
 */
void tstring(va_list lst)
{
	char *str;

	str = va_arg(lst, char *);
	if (str == 0)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variable number of arguments
 */
void print_all(const char * const format, ...)
{
	ftype fa[] = {
		{"c", tchar},
		{"i", tint},
		{"f", tfloat},
		{"s", tstring}
	};

	int l1 = 0, l2 = 0;
	va_list lst;
	char *spc = "";

	va_start(lst, format);
	while (format && format[l1])
	{
		l2 = 0;
		while (l2 < 4)
		{
			if (format[l1] == fa[l2].tc[0])
			{
				printf("%s", spc);
				fa[l2].tf(lst);
				spc = ", ";
			}
			l2++;
		}
		l1++;
	}
	printf("\n");
	va_end(lst);
}
