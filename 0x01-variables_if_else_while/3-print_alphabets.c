#include <stdio.h>
/**
 * main - Entry point
 * print alphabet using while loop : putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 97;
	int A = 65;
while (a < 123)
{
putchar(a);
a++;
}
while (A < 91)
{
putchar(A);
A++;
}
putchar('\n');
	return (0);
}
