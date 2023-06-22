#include "main.h"
/**
 * print_alphabet_x10 - print in a-z 10
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i, j;
for (j = 1; j < 11; j++)
{
for (i = 97; i < 123; i++)
{
putchar(i);
}
_putchar('\n');
}
}
