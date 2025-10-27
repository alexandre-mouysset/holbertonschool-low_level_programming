#include "main.h"

/**
 * _isdigit - Checks if a character is an uppercase letter
 * @c: The character to check (ASCII value)
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
