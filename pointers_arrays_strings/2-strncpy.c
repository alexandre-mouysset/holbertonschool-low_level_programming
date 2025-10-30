#include "main.h"

/**
 * _strncpy - copies up to n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	dest[i] = '\0';

return (dest);
}
