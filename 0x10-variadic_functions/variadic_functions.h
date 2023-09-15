#ifndef STRUCTURES_H
#define STRUCTURES_H
#include <stdarg.h>

/**
 * struct Ftype - struct op
 * @tc: parameter
 * @tf: the function associated
 */
typedef struct Ftype
{
	char *tc;
	void (*tf)(va_list);
} ftype;

#endif


#ifndef VARFUNC_H
#define VARFUNC_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
