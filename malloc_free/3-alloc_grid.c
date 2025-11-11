#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **tab;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tab = malloc(height * sizeof(int *));
	if (tab == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));
		if (tab[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tab[j]);
			}
			free(tab);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			tab[j][i] = 0;
		}
	}
	return (tab);
}
