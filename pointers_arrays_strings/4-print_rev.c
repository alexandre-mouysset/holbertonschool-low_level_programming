#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to be printed
 *
 * Description: This function starts from the end of the string
 *              and prints each character in reverse order using _putchar,
 *              then prints a newline character.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	for (i = i - 1; s[i] > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
