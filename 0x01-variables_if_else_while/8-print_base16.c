#include <stdio.h>
/**
 * main - Entry point
 * alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
int a = 48;
int b = 97;

while (a < 58)
{
putchar(a);
a++;
}
while (b < 103)
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
