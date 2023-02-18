#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void){
	int c=97;
	while(c<123){
		if(c==101||c==113){
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return 0;
}
