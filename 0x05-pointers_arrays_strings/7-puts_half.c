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
	int i, length, halflen;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	halflen = (length / 2);

	for (i = 0; i < halflen; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
