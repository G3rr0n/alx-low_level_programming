#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints a list of numbers from 0-14
 *
 * Return: return 0 to exit code
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}

		_putchar('\n');
	}
}
