#include <stdio.h>

/**
 * main - prints prints the size of various types on the 
 * computer it is compiled and run on.
 * Return: Always 0.
 */
int main(void)
{
	printf("size of char: %zu byte\n", sizeof(char));
	printf("size of an int: %zu byte\n", sizeof(int));
	printf("size of a long int: %zu byte\n", sizeof(long int));
	printf("size of a long long int: %zu byte\n", sizeof(long long int));
	printf("size of a float: %zu byte\n", sizeof(float));
	return (0);
}
