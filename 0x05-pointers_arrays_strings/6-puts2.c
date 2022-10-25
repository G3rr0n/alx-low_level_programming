#include "main.h"
#include <stdio.h>

/**
 * puts2 - print every other character of a string
 * @str: param to print
 *
 * Return: return 0 to exit
 */

void puts2(char *str)
{
	int i, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}


