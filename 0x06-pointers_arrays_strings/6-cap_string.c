#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 * Return: 1 if separator, 0 otherwise
 */

int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the input string
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
		{
			*ptr = *ptr - ('a' - 'A');
		}

		capitalize_next = is_separator(*ptr);
		ptr++;
	}

	return (str);
}
