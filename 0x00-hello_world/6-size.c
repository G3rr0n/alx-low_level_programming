#include <stdio.h>
/**
 *main -  prints the size of various types on the computer
 *Return: return zero as exit(0)
 */
int main(void)
{
	char char1;
	int int1;
	long int l_int;
	long long int l_l_int;
	float float1;

	printf("Size of a char: %d byte(s)\n", sizeof(char1));
	printf("Size of an int: %d byte(s)\n", sizeof(int1));
	printf("Size of a long int: %d byte(s)\n", sizeof(l_int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(l_l_int));
	printf("Size of a float: %d byte(s)\n", sizeof(float1));
	return (0);
}
