#include <stdlib.h>
#include <time.h>
/**
 * main - function to determine last digit of a given number
 *
 *Return: return 0 to exit from main
*/

int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;

	if (ldigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, ldigit);
	}
	else if (ldigit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, ldigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ldigit);
	}

	return (0);
}
