#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _abs - Computes the absolute value of integer
 * @i: parameter for abs function
 *Return: return the absolute value after computation
 *
*/
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
