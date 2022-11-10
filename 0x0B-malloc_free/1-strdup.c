#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in mem
 *
 * @str: param of function which is string to be copied
 *
 * Return: return null for insufficient memory else pointer to dup str
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
