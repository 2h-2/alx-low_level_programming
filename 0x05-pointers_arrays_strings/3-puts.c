#include "main.h"
#include <stdio.h>
/**
	 * _puts - writes the character c to stdout
	 * @str: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
void _puts(char *str)
{
	while (*str != '\n')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
