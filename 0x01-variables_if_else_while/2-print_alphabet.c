#include <stdio.h>
/**
 * main - Entry point
 * print char using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
int n = 97;

	while (n < 123)
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
