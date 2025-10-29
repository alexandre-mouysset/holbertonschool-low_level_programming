#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 *Starts from the middle of the string and prints to the end.
 */

void puts_half(char *str)
{
		int i, n;

	for (i = 0; str[i] != '\0'; i++)
	;

	n = (i + 1) / 2;

	for (; str[n] != '\0'; n++)
	_putchar(str[n]);
_putchar('\n');
}
