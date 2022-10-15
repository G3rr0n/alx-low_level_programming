#include <stdio.h>

/**
 * main - entry point for all c code
 *
 *Return: return 0 to exit code
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i < '9')
		{
			putchar(i);
			putchar(',');
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
