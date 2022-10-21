#include <stdio.h>
#include "main.h"

/**
 *  _isdigit - function to check if param is a digit
 *  @c: parameter to check when function is invoked
 *
 *  Return: return 0 or 1 depending on check
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
