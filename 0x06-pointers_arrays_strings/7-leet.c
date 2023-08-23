#include "main.h"

/**
 * leet - encodes strings into digits
 * @str: pointer to char and placeholder for array
 * Return: prints the output
 */

char *leet(char *str)
{
	char *p = str;

	while (*p)
	{
		char c = *p;
		if ((c == 'a' || c == 'A') ||
			(c == 'e' || c == 'E') ||
			(c == 'o' || c == 'O') ||
			(c == 't' || c == 'T') ||
			(c == 'l' || c == 'L'))
		{
				*p = (c == 'a' || c == 'A') ? '4' :
				(c == 'e' || c == 'E') ? '3' :
				(c == 'o' || c == 'O') ? '0' :
				(c == 't' || c == 'T') ? '7' : '1';
		}
		p++;
	}

	return str;
}
