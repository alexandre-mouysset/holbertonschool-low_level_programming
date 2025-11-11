#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a given char
 * @size: size of the array
 * @c: character used to fill the array
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab;

	if (size == 0)
	{
		return (NULL);
	}

	tab = malloc(size * sizeof(char));
	if (tab == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}
