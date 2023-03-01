#include "main.h"
 /**
	 * string_toupper - Changes all lowercase letters of a string to uppercase
	 * @n: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
