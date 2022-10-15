#include <stdio.h>
/**
 * main - entry point for all c code
 *
 *Return: return 0 to exit code
 */

int main(void)
{
	int nums;
	char hex;

	for (nums = '0'; nums <= '9'; nums++)
		putchar(nums);
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
