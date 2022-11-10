#include "main.h"
#include <stdlib.h>

/**
 * str_concat - func to merge two strings
 * @str1: parame one for func
 * @str2: param two for func
 *
 * Return: NULL if concatenation fails else pointer to mem space for
 * concat strs
 */

char *str_concat(char *str1, char *str2)
{
	char *concat_str;
	int index, concat_index = 0, len = 0;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	for (index = 0; str1[index] || str2[index]; index++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; str1[index]; index++)
		concat_str[concat_index++] = str1[index];

	for (index = 0; str2[index]; index++)
		concat_str[concat_index++] = str2[index];

	return (concat_str);
}
