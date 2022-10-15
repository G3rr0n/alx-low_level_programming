#include <stdio.h>
/**
 * main - entry point to all C programs
 *
 *Return: return 0 to exit
 */

int main(void)
{
	char chlower;
	char chupper;

	for (chlower = 'a'; chlower <= 'z' ; chlower++)
	{
		putchar(chlower);
	}

	for (chupper = 'A'; chupper <= 'Z'; chupper++)
	{
		putchar(chupper);
	}

	putchar('\n');
	return (0);
}
