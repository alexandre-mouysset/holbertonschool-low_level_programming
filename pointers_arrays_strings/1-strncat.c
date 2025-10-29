#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string, where src will be appended
 * @src: source string to append to dest
 *
 * Appends the src string to the dest string, overwriting the null byte
 * at the end of dest, and then adds a new null terminator.
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
