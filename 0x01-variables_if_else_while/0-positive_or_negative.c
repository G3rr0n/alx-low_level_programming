#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - checks if variable n is zero, greater or less than zero
 *Return: return 0 to exit function main
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

