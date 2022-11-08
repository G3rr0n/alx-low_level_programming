#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to return product of two numbers or error
 * @argc: count of params
 * @argv: string of params
 * Return:  exit code
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", product);
		return (0);
	}
}

