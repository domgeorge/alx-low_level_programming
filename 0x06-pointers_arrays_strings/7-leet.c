#include "main.h"
#define LEETIN "aAeEoOtTlL"
#define LEETOUT "4433007711"

/**
 * leet - encodes strings into digits
 * @str: pointer to char and placeholder for array
 * Return: prints the output
 */

char *leet(char *str)
{
	char *ret = str, *leetin = LEETIN, *leetout = LEETOUT;
	int i = 0;

	for (; *str; str++)
	{
		for (i = 0; leetin[i]; i++)
			if (*str == leetin[i])
				*str = leetout[i];
	}
	return (ret);
}
