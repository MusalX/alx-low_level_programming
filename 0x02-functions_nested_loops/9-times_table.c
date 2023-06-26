#include "main.h"
/**
 *times_table - print time table
 * Return: nada
 */
void times_table(void)
{
int i, j, p, d, u;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		p = i * j;
		d = p / 10;
		u = p % 10;
		_putchar(d + 48);
		_putchar(u + 48);
		if (j != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
			if (p < 10)
				_putchar(' ');
		}
	_putchar('\n');
	}
}
