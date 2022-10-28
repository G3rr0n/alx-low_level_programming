#include "main.h"

/**
 * _strcat - function to add two strings
 * @dest: pointer parameter for function
 * @src: pointer parameter for function 2
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}