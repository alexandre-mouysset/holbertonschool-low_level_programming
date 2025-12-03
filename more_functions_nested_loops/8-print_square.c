#include "main.h"

/**
 * print_square - Prints a square using the '#' character
 * @size: The size of the square (number of rows and columns)
 *
 * Description: This function prints a square of size `size`
 * using the '#' character. Each line contains `size` '#'
 * characters. If `size` is less than or equal to 0, the
 * function simply prints a new line.
 *
 * Return: Nothing (void)
 */

void print_square(int size)
{
	int l, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (l = 0; l < size; l++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
