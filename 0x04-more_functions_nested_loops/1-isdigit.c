#include "main.h"

/**
 * _isdigit - check for an integer digit b/w 0 to 9
 * @c: integer to be checked
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
