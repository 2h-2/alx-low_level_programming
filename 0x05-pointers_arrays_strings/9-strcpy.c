#include "main.h"
#include <stdio.h>
#include <string.h>
/**
	 * _strcpy - writes the character c to stdout
	 * @dest: The character to print
	 * @src: input
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';

	return (dest);
}
