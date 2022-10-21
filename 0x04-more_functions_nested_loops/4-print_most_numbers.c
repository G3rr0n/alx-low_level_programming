#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function to print numbers except 2, 4
 *
 * Return: return 0 to exit code
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if ((i != '2') && (i != '4'))
		{
			putchar(i);
		}

		i++;
	}

	putchar('\n');
}
