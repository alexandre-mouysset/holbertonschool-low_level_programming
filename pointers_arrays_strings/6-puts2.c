#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Prints characters at even indexes, then a newline.
 * (Note: use i % 2 == 0, not str[i] % 2 == 0.)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
