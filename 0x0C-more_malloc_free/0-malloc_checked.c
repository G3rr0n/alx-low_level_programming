#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using the malloc function
 * @numbytes: number of bytes to allocate
 * Return: the pointer of the allocated memory
 */

void *malloc_checked(unsigned int numbytes)
{
	void *mem = malloc(numbytes);

	if (mem == NULL)
		exit(98);

	return (mem);
}
