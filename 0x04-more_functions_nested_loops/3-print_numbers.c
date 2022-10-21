#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function to print numbers from 0-9
 *
 * Return: return 0 to exit code
 */

void print_numbers(void)
{
	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
}
