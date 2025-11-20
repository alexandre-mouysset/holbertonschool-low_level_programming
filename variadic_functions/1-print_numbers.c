#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its integer parameters
 * @n: The number of integer arguments passed to the function
 *
 * Return: If n is 0 returns 0 otherwise returns the sum the provided integers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
