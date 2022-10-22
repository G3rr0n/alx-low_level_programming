#include <stdio.h>
#include "main.h"

/**
 *  print_triangle - print a triangle function
 *
 *  @size: param to determine size of triangle
 *
 *  Return: nothing to return
 */

void print_triangle(int size)
{
	int row;
	int hash;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}



