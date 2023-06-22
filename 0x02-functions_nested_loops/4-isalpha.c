#include "main.h"
/**
 *_isalpha -  check if lowercase
 * @c: to be checked
 * Return:  is 0 or 1
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
