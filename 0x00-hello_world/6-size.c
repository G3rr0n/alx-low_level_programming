#include <stdio.h>
/**
 *main -  prints the size of various types on the computer
 *Return: return zero as exit(0)
 */
int main(void)
{
	char char_variable;
	int integer_variable;
	long int long_int_var;
	long long int very_long_int;
	float float_variable;

	printf("Size of a char: %d byte(s)\n", sizeof(char_variable));
	printf("Size of an int: %d byte(s)\n", sizeof(integer_variable));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_int_var));
	printf("Size of a long long int: %d byte(s)\n", sizeof(very_long_int));
	printf("Size of a float: %d byte(s)\n", sizeof(float_variable));
	return (0);
}
