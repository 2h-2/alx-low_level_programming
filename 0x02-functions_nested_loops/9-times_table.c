#include "main.h"
/**
		 * _putchar - writes the character c to stdout
	 * @c: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
        {
		z = x * y;
		if (z > 0)
		{
			u = z % 10;
			d = (z - u) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(d + '0');
			_putchar(u + '0');
		}
		else
		{
			if (y != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			_putchar(z + '0');
		}
	}
	_putchar('\n');
	}
}

