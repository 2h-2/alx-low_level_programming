#include "main.h"
/**
	 * _strstr - writes the character c to stdout
	 * @haystack: The character to print
	 * @needle: input
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
