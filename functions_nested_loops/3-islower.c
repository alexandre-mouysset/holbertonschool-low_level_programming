#include "main.h"

/**
 * _islower - return 1 if lowercase
 * @c: The character to check (ASCII value)
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
