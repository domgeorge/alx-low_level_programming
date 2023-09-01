#include "main.h"

/**
 * _abs - computes the absolute value of the number from zero
 * @i: integer placeholder
 * Return: absolute value of integer
 */

int _abs(int i)
{
	if (i < 0)
		i = i * -1;
	return (i);
}
