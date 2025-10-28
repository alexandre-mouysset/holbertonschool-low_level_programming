#include "main.h"

/**
 * _puts - prints a string to the standard output, followed by a new line
 * @str: pointer to the string to be printed
 *
 * Description: This function prints each character of the string
 *              using _putchar, and then prints a newline character.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (i = i - 1; s[i] > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
