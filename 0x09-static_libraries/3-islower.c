#include "main.h"

/**
 * _islower - tests if a character is the lowercase letter of the alphabet.
 *
 * @c: character placeholder
 * Return: 1 if a lowercase letter, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
