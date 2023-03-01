#include "main.h"
 /**
	 * _strncpy - writes the character c to stdout
	 * Description : copy
	 * @dest: The character to print
	 * @src: input
	 * @n: input
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = sre[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

