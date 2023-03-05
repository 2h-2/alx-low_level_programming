#include "main.h"
/**
	 * _putchar - writes the character c to stdout
	 * @c: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
