#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * print last digit of a random n and say his range
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int n;
	int ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (ld > 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digiit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
