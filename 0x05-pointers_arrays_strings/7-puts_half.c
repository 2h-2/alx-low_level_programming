#include "main.h"
/**
	 * puts_half - writes the character c to stdout
	 * @str: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

void puts_half(char *str)
{
	int i = 0;


	while (*str != '\0')
	{
		i++;
		str++;
	}
	str -= (i / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
