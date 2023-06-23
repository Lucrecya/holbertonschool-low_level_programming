#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
int x, y, u, d;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
int result = x * y;

if (result > 9)
{
u = result % 10;
d = (result - u) / 10;
_putchar(',');
_putchar(' ');
_putchar(d + '0');
_putchar(u + '0');
}
else
{
if (y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar(result + '0');
}
}
_putchar('\n');
}
}


