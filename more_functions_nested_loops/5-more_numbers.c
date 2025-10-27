#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: This function prints the numbers from 0 to 14
 * ten times using the _putchar function. Numbers 10 to 14
 * are printed as two characters ('1' followed by the digit),
 * and each sequence is followed by a new line.
 *
 * Return: Nothing (void)
 */

void more_numbers(void)
{
	int i;
	int repeat;

for (repeat = 0; repeat < 10; repeat++)
{
	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar('1');
		}
		_putchar('0' + i % 10);
	}
	_putchar('\n');
}
}
