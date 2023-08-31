#include "main.h"

/**
 * pre_is_prime_number - takes two argument to
 * check for possible prime numbers
 * @n: integer argument
 * @divisor: base case 1 is divisor
 * Return: 1 if equal to 1
 * 0 if n is divisble by divisor ie not a prime
 * Returm: continues checking with smaller divisor
 */

int pre_is_prime_number(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (pre_is_prime_number(n, divisor - 1));
}

/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: integer argument
 * Return: 0 and 1 are not prime numbers
 * start divisibility from n - 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (pre_is_prime_number(n, n - 1));
}
