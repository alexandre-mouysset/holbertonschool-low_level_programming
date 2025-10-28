#include "main.h"

/**
 * _puts - prints a string to the standard output, followed by a new line
 * @str: pointer to the string to be printed
 *
 * Description: This function prints each character of the string
 *              using _putchar, and then prints a newline character.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
