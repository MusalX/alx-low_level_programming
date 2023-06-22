#include <stdio.h>
/**
 * main - Entry point
 * numbers with  comma and space two digits
 * Return: Always 0 (success)
 */
int main(void)
{
int i = 48;
int j;

while (i < 57)
{
j = i + 1;
while (j < 58)
{
putchar(i);
putchar(j);
if (i != 56)
{
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
