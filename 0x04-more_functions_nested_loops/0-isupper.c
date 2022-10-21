#include <stdio.h>
#include "main.h"

/**
 * _isupper - function to check uppercase
 *
 * @c: parameter to check when function is invoked
 * Return: return the 1 or 0 depending on the case
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
