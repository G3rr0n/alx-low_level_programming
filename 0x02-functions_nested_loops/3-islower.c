#include "main.h"
#include <ctype.h>
/**
 *  _islower - Shows 1
 *  @c: parameter to be checked when is_lowers is invoked
 *Return: 1 for lowercase characters and 0 for others
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
