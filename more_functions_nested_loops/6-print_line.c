#include "main.h"

/**
 * print_line - Draws a straight line using the underscore character
 * @n: The number of times the underscore character should be printed
 *
 * Description: This function prints a straight line consisting of
 * the '_' character. If n is less than or equal to 0, it simply
 * prints a new line. Otherwise, it prints n underscores followed
 * by a new line.
 *
 * Return: Nothing (void)
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
