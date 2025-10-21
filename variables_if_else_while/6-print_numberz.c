#include <stdio.h>

/**
 * main - print 0123456789 with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int decimal;

	for (decimal = 0; decimal < 10; decimal++)
	{
		putchar(decimal + '0');
	}
	putchar('\n');
return (0);
}
