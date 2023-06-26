#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: The size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int i, j, x;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = size - i; j > 1; j--)
{
_putchar(32);
}
for (x = 0; x <= i; x++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
