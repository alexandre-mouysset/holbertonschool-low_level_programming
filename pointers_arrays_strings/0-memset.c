#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: pointer to the memory area to fill
 * @b: the value to set (as a char)
 * @n: the number of bytes to be set to the value
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
