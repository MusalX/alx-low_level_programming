#include "main.h"
/**
 *jack_bauer -  print minutes
 * Return:  nada
 */
void jack_bauer(void)
{
int a, b, c, d;
for (a = 0; a < 3; a++)
{
	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 6; c++)
		{
			for (d = 0; d < 10; d++)
			{
				if (a == 2 && b >= 4)
					break;
				_putchar(a + 48);
				_putchar(b + 48);
				_putchar(58);
				_putchar(c + 48);
				_putchar(d + 48);
				_putchar('\n');
			}
		}
	}
}
}

