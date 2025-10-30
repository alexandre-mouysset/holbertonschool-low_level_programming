#include "main.h"

/**
 * reverse_array - reverses the elements of an integer array
 * @a: array of integers
 * @n: number of elements in the array
 *
 * Reverses the order of elements in the array in place.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; )
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;

		i++;
		n--;
	}
}
