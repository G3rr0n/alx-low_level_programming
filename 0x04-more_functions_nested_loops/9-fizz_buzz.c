#include <stdio.h>

/**
 * main - entry point for all code
 *
 * Return: 0 to exit code
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

		i++;
	}

	printf("\n");

}
