#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element of an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @action: pointer to a function that takes an int and returns void
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
