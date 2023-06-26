#include "main.h"
/**
 *times_table - print time table
 * Return: nada
 */
void times_table(void)
{
int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		p = i * j;
		_putchar(p + 48);
		_putchar(',');
		}
		_putchar('\n');
	}
}
