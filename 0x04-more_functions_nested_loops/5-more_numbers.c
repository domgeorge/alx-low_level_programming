#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 on 10 lines
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}

			_putchar((j % 10) + '0');
		}

		_putchar('\n');

		i++;
	}
}
