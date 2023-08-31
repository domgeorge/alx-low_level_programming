#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - checks whether a given string
 * is a palindrome or not
 * @s: pointer to char
 * @start: beginning index
 * @end: terminating index
 * Return: 1 for all checked and matching character/s
 * 0 for unmatching characters indicating a palindrome
 * checks the next pair of characters
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer to char
 * Return: 1 if single character or emplty string is a palindrome
 * starts checking characters from boths ends
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	return (is_palindrome_helper(s, 0, length - 1));
}
