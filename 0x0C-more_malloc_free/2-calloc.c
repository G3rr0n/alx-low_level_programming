#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * with each member size of input bytes
 *
 * @nmemb: number of elements
 * @size: size of the byte of an element
 *
 * Return: exit func with required output
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
