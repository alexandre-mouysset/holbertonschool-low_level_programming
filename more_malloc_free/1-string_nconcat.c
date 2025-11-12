#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes to take from s2
 *
 * Description: Allocates memory and returns a new string, which is the
 * concatenation of s1 and the first n bytes of s2. If s1 or s2 is NULL,
 * it is treated as an empty string.
 *
 * Return: pointer to the newly allocated string, or NULL if allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *tab;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	;

	for (j = 0; s2[j] != '\0' && j < n; j++)
	;

	tab = malloc((j + i + 1) * sizeof(char));
	if (tab == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		tab[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0' && j < n; j++)
	{
		tab[i + j] = s2[j];
	}
	tab[i + j] = '\0';

return (tab);
}
