#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value to include in the array
 * @max: the maximum value to include in the array
 *
 * Description: Allocates memory for an array of integers containing
 * all values from min to max inclusive, in ascending order.
 * Returns NULL if min > max or if memory allocation fails.
 *
 * Return: pointer to the newly created array,
 * or NULL on failure
 */

int *array_range(int min, int max)
{
	int *tab;
	int i;

	if (min > max)
		return (NULL);

	tab = malloc(sizeof(int) * (max - min + 1));

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		tab[i] = min + i;
	}
return (tab);
}
