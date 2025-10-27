#include "main.h"

/**
 * print_numbers - Prints the digits from 0 to 9
 *
 * Description: This function prints all digits from 0 to 9
 * using the _putchar function, followed by a new line.
 *
 * Return: Nothing (void)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
