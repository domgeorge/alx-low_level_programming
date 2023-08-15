#include <unistd.h>

/**
 * _putchar - prints out a character
 *
 * c: variable for character
 */

void _putchar(char c)
{
	write(1, &c, 1);
}
