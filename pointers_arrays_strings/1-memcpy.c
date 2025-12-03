#include "main.h"

/**
 * _memcpy - Copies a block of memory from one location to another
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy from src to dest
 *
 * Return: pointer to the destination memory area (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
