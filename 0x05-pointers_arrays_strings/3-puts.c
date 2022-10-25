#include "main.h"

/**
 * _puts - prints a string to stdout with write
 * @str: parameter to print on function call
 *
 * Return: return 0 to exit
 */

void _puts(char *str)
{
	int myvar;

	for (myvar = 0; str[myvar] != '\0'; myvar++)
	{
		_putchar(str[myvar]);
	}

	_putchar('\n');
}

