#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings with a separator
 * @separator: String to print between arguments
 * @n: Number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, const char *);
		if (string == NULL)
			printf("(nil)");

		else
		printf("%s", string);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
