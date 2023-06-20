#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: Prints all the lowercase alphabet except q and e followed by a new line using the putchar function.
*
* Return: 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}

