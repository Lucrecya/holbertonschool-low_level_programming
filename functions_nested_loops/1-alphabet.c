#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z',
 *              followed by a new line character.
 *              Return: 0 (Success)
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}

