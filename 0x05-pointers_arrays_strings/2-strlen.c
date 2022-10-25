#include "main.h"
#include <stdio.h>

/**
 * _strlen - checks the length of a given string
 * @s: parameter to check length of
 *
 * Return: return 0 to exit
 */

int _strlen(char *s)
{
	int myvar;

	myvar = 0;

	while (s[myvar] != '\0')
	{
		myvar++;
	}

	return (myvar);
}
