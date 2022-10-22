#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints a list of numbers from 0-14
 *
 * Return: return 0 to exit code
 */

void more_numbers(void)
{
	char n;
	char c;
	int j = 0;

	while (j < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9);
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}

		_putchar('\n');
		i++;
	}
}
