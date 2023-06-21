#include <stdio.h>
/**
 * main - Entry point
 * print numbers using putchar
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
