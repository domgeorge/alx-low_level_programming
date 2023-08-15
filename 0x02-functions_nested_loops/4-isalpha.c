#include "main.h"

/**
 * _isalpha - tests if a character is from in the English alphabet
 * @c: variable placeholder
 * Return: 1 if the character is an English alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
