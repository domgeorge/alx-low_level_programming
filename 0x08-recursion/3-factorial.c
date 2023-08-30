#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: argument for integer given numeber
 * Return: -1 if less than 0
 * 1 if equal to 0 and multiplies with the factorial of
 * numbers it is lesser than
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
