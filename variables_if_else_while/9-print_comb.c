#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: Print all possible combinations of single-digit numbers,
* separated by comma and space. Numbers are printed in ascending order.
*
* Return: 0 (Success)
*/
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');
if (digit != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
