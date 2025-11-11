#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a new allocated string.
 * @s1: First string (NULL treated as empty).
 * @s2: Second string (NULL treated as empty).
 *
 * Return: Pointer to the new concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *tab;

	if (s1 != NULL)
	{
		for (; s1[i] != '\0'; i++)
		;
	}

	if (s2 != NULL)
	{
		for (; s2[j] != '\0'; j++)
		;
	}

	tab = malloc((i + j + 1) * sizeof(char));

	if (tab == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			tab[i] = s1[i];
		}
	}
		if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			tab[i + j] = s2[j];
		}
	}
	tab[i + j] = '\0';

return (tab);
}
