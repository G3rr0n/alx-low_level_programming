#include "main.h"

/**
 * factorial - find the factorial of a given number
 * @n: parameter of the factorial function
 *
 * Return: return to prevent endless loop
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
