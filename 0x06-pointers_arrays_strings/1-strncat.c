#include "main.h"
 /**
	 * _strncat - a function that concatenates two strings.
	 * @dest: The character to print
	 * @src: input
	 * Return: On success 1.
	 * @n:On error, -1 is returned, and errno is set appropriately.
	 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
