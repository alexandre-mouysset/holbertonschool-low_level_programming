#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Copies the string including the terminating null byte.
 *
 * Return: pointer to the destination string (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

return (dest);
}
