#include "main.h"

/**
 * _strncat - concatenates at most n characters from src to dest
 * @dest: destination string, where src will be appended
 * @src: source string to append
 * @n: maximum number of characters to append from src
 *
 * Appends up to n characters from src to dest, then adds a null terminator.
 *
 * Return: pointer to the resulting string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
