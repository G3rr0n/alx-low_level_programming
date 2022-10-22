#include <stdio.h>
#include "main.h"

/**
 * print_number - print integers as they are given
 * @n: param to check and print
 * Return: return 0 to exit code;
 *
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if(i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}

