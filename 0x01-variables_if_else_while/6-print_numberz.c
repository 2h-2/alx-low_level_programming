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
	int a;
	for (a = 0; a < 10; a++)
		putchar(a+'0');
	putchar('\n');
	return (0);
}