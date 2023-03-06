#include "main.h"
/**
	 * _memcpy - writes the character c to stdout
	 *@dest: The character to print
	 *@src: input
	 *@n:Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
