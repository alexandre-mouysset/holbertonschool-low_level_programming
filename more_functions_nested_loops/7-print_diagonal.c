#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the backslash character
 * @n: The length of the diagonal line
 *
 * Description: This function prints a diagonal line of length n
 * using the '\' character. Each line is indented by spaces to
 * create the diagonal effect. If n is less than or equal to 0,
 * the function simply prints a new line.
 *
 * Return: Nothing (void)
 */

void print_diagonal(int n)
{
	int l, c;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0; l < n; l++)
	{
		for (c = 0; c < l; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
