#include <stdio.h>
/**
 * main - entry point for all c codes
 *
 *Return: return 0 to exit program
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch == 'e') || (ch == 'q'))
		{
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}

