#include "main.h"
/**
	 * puts2 - writes the character c to stdout
	 * @str: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if ((j % 2) == 0)
			_putchar(s[j]);
	}
	_putchar('\n');
}
