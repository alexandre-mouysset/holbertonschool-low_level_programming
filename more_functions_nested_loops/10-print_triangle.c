#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using the '#' character
 * @size: The height and base length of the triangle
 *
 * Description: This function prints a right-aligned triangle made up of
 * the '#' character. The triangle has `size` rows, and each row increases
 * in the number of '#' characters from top to bottom. If `size` is less
 * than or equal to 0, the function simply prints a new line.
 *
 * Return: Nothing (void)
 */

void print_triangle(int size)
{
	int l, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (l = 1; l <= size; l++)
	{
		for (c = 1; c <= size; c++)
		{
			if (c <= (size - l))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
