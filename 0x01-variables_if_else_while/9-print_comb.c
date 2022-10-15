#include <stdio.h>

/**
 * main - entry point for all c code
 *
 *Return: return 0 to exit code
 */

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
