#include <stdio.h>

/**
 * main - prints out all arguments including first one
 * @argc: number of arguments
 * @argv: array of arguments passed
 * Return: return 0 to exit code
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
