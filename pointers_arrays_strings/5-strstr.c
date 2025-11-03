#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to be scanned
 * @accept: Pointer to the string containing the bytes to match
 *
 * Return: A pointer to the first occurrence in s
 * of any of the bytes in accept,
 *         or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;


	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}

	}
	return (0);
}
