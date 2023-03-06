#include "main.h"
/**
	 * _strpbrk - writes the character c to stdout
	 * @s: The character to print
	 * @accept: input
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}

