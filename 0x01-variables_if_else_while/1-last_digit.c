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
	int n,m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n%10;
	if(n>5)
		printf("last digit of %d is %d and is greater than 5\n",n,m);
	if(n==0)
		printf("last digit of %d is %d and is 0\n",n,m);
	if(n<6&&n!=0)
		printf("last digit of %d is %d and is less than 6 and not 0\n",n,m);
	return (0);
}