#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
