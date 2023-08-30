#include "main.h"

/**
 * _pre_sqrt_recursion - gets the possible natural square root
 * @n: integer argument to check for natural square root
 * @multiple: possible natural square root of integer n
 * Return: multiple is natural root if square of multiple is n
 * -1 if greater than n
 * increments the multiple and tries again
 */

int _pre_sqrt_recursion(int n, int multiple)
{
	if (multiple * multiple == n)
	{
		return (multiple);
	}
	else if (multiple * multiple > n)
	{
		return (-1);
	}

	return (_pre_sqrt_recursion(n, multiple + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer argument
 * Return: -1 if integer is a negative number
 * starts checking possible multiples from 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_pre_sqrt_recursion(n, 0));
}
