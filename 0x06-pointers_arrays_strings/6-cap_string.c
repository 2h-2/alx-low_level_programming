#include "main.h"
	
	/**
	 * cap_string - writes the character c to stdout
	 * @n: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

char *cap_string(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i - 1] == '\n' 
		|| n[i - 1] == '\t' 
		|| n[i - 1] == ' ' 
		|| n[i - 1] == '.' 
		|| n[i - 1] == ',' 
		|| n[i - 1] == '?' 
		|| n[i - 1] == '!' 
		|| n[i - 1] == ';' 
		|| n[i - 1] == '"' 
		|| n[i - 1] == ')' 
		|| n[i - 1] == '(' 
		|| n[i - 1] == '{' 
		|| n[i - 1] == '}')
		{
			if (n[i] >= 'a' && n[i] <= 'z')
				n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
