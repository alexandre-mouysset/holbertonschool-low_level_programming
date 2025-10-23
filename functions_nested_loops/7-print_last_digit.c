#include "main.h"

/**
* print_last_digit - print last digit
* @d: The character to check
* Return: return -n if negative else n
*/

int print_last_digit(int d)
{

	if (d < 0)
	{
		d = -d;
	}
	else
	{
		d = d;
	}

	d = d % 10;
	_putchar('0' + d);
	return (d);
}
