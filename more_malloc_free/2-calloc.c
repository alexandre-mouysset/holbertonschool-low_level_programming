#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: number of elements to allocate
 * @size: size of each element in bytes
 *
 * Description: Allocates memory for an array of `nmemb` elements,
 * each of size `size` bytes, and sets all bytes to 0. Returns NULL
 * if memory allocation fails or if `nmemb` or `size` is 0.
 *
 * Return: pointer to the newly allocated zero-initialized memory,
 * or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (tab);

	for (i = 0; i < nmemb * size; i++)
		tab[i] = 0;

return (tab);
}
