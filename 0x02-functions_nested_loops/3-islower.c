#include "main.h"
/**
 *_islower -  check if lowercase
 * Return: 0 or 1
 */
int _islower(int c)
{
if (c > 96 && c < 123)
{
	return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
