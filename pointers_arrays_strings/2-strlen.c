#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The input string
 * Return: the length of the string
 */

int _strlen(char *s)

{
	int counter;

	for (counter = 0; *s != '\0'; s++)
	++counter;

	return (counter);

}
