#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an n number of characters in an array
 * @n: number array items to print;
 * @a: array to check
 *
 * Return: return 0 to exit
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}

	printf('\n');
}

