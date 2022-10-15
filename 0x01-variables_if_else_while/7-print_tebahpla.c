#include <stdio.h>

/**
 * main - entry point for all c code
 *
 *Return: return 0 to exit code
 */

int main(void)
{
	char alphareverse;

	for (alphareverse = 'z'; alphareverse >= 'a'; alphareverse--)
		putchar(alphareverse);
	putchar('\n');

	return (0);
}
