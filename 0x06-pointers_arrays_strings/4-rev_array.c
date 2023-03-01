#include "main.h"
 /**
	 * reverse_array - writes the character c to stdout
	 * @a: The character to print
	 * @n: input
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */

void reverse_array(int *a, int n)
{
	int i;
	int b[n];
	int j = n - 1;

	for (i = 0; i < n; i++)
	{
		b[i] = a[j];
		j--;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = b[i];
	}

}
