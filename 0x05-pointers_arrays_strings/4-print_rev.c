#include "main.h"

/**
 * print_rev - prints a given string in reverse
 *
 * @s: parameter string to reverse
 *
 * Return: return 0 to exit
 */

void print_rev(char *s)
{
	int forward, reverse, length;

	forward = 0;

	while (s[forward] != '\0')
	{
		forward++;
	}

	length = forward;

	for (reverse = length - 1; reverse >= 0; reverse--)
	{
		_putchar(s[reverse]);
	}

	_putchar('\n');
}

