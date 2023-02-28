#include "main.h"
/**
	 * rev_string - writes the character c to stdout
	 * @s: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
void rev_string(char *s)
{
	int i;
	int c = 0;
	char rev = s[0];

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
