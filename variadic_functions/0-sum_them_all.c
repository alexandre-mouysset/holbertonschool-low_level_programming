#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its integer parameters
 * @n: The number of integer arguments passed to the function
 *
 * Return: If n is 0 returns 0 otherwise returns the sum the provided integers.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	sum = sum + va_arg(ap, int);


	va_end(ap);

	return (sum);
}
