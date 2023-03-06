#include "main.h"
/**
	 * _strpbrk - Entry point
	 * @s: input
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

