#include "main.h"

/**
 * _isupper - checks for a uppercase character
 * @c: integer to be checked
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}