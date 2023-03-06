#include "main.h"
/**
	 * _strchr - writes the character c to stdout
	 * @c: The character to print
	 * @s: input
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
