#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void){
	int c = 65 ,v = 97;
	while (v < 123)
	{
                putchar(v);
                v++;
        } 
	while (c < 91)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return 0;
}
