#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swap the values of two variables
 * @a: first parameter (pointer)
 * @b: second parameter (pointer);
 *
 * Return: return void in void functions
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
