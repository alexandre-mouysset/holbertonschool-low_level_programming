#include "main.h"

/**
* print_last_digit - print last digit
* @d: The character to check
* Return: return -n if negative else n
*/

int print_last_digit(int d)
{
	d = d % 10;

	if (d < 0)
	{
		d = -d;
	}
	else
	{
		d = d;
	}

	_putchar('0' + d);
	return (d);
}
