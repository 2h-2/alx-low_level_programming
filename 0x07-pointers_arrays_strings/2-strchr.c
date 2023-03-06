#include "main.h"
/**
	 * _strchr - Entry point
	 * @c: input
	 * @s: input
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
