#include <stdio.h>

/**
 * main - main function is the entry point for all C code
 *
 *Return: return 0 to exit code
*/

int main(void)
{
	char fletter;

	for (fletter = 'a'; fletter <= 'z'; fletter++)
	{
		putchar(fletter);
	}
	putchar('\n');
	return (0);
}
