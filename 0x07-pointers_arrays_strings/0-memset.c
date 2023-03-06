#include "main.h"
/**
         * _memset - writes the character c to stdout
	 * @b: The character to print
	 * @s: input
	 * @n: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
