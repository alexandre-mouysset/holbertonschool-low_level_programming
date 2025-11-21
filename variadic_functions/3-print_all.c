#include <stdarg.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * _print - prints arguments according to format
 * @format: format string containing the list of types
 * @ap: variable argument list
 *
 * Return: void
 */
void _print(const char *format, va_list ap)
{
	int i = 0;
	char *string_print;
	int int_print;
	double float_print;

	while (format != NULL && i < _strlen(format))
	{
		switch (format[i])
		{
		case 'c':
			int_print = va_arg(ap, int);
			printf("%c", int_print);
			break;
		case 'i':
			int_print = va_arg(ap, int);
			printf("%d", int_print);
			break;
		case 'f':
			float_print = va_arg(ap, double);
			printf("%f", float_print);
			break;
		case 's':
			string_print = va_arg(ap, char *);
			if (string_print == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", string_print);
			break;
		default:
			i++;
			continue;
		}
		if (i + 1 < _strlen(format))
			printf(", ");
		i++;
	}
}

/**
 * print_all - affiche tout selon le format donné
 * @format: liste des types d'arguments à imprimer
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list ap;

	va_start(ap, format);

	_print(format, ap);

	printf("\n");
	va_end(ap);
}
