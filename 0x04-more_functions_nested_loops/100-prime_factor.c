#include <stdio.h>

/**
 * main - entry point for all c code
 *
 * Return: 0 to exti code
 *
 */

int main(void)
{
	unsigned long int i = 612852475143;
	unsigned long int n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);

}
