#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer for base value
 * @y: integer for exponent
 * Return: -1 if exponent is less than 0
 * 1 if equal to 0
 * and multiplies x by the nonzero positive decreasing value of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
