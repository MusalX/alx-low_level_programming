#include "main.h"
/**
 *print_last_digit -  last digit
 * @i: to be checked
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l = i % 10;

		if (l < 0)
		{
			_putchar(-l + 48);
return (l * -1);
}
else
{
	_putchar(l);
	return (l);
}
}
