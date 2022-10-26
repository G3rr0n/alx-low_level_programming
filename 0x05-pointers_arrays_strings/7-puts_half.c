#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: param to print half of
 *
 * Return: return 0 to exit
 */

void puts_half(char *str)
{
	int i, length, n;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = length / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2)
	{
		for (n = (length - 1) / 2; n < length - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}


	_putchar('\n');
}
