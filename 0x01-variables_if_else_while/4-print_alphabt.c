#include <stdio.h>
/**
 * main - Entry point
 * putchar alphatbets with some excceptions
 *Return: Always 0 (sucess)
 */
int main(void)
{
int a = 97;

while (a < 123)
{
if (a != 101 && a != 113)
{
	putchar(a);
}
	a++;
}
putchar('\n');
return (0);
}
