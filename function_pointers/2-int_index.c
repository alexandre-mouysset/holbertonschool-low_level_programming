#include "function_pointers.h"

/**
 * int_index - finds the first element in an array for which cmp is true
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: function that tests each element
 *
 * Return: index of first matching element, or -1 if none
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
