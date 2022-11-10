#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array of chars
 *
 * @size: param one
 * @c: param two of func
 *
 * Return: return value NULL if size is 0 else pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
