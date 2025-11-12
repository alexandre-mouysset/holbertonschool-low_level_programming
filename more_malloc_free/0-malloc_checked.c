#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Description: Allocates a block of memory of size 'b' bytes.
 * If malloc fails, the function terminates the program with exit status 98.
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *tab;

	tab = malloc(b);
	if (tab == NULL)
	{
		return (98);
	}
return (tab);
}
