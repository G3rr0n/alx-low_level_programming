#include "main.h"
#include <ctype.h>
/**
 * _isalpha - function that shows 1 if the input is a
 * else other cases show 0
 * @c: parameter to check when functio is invoked
 *Return: 1 for letters, 0 for the rest
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
