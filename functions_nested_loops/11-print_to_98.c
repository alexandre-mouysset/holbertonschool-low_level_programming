#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print table
* @n: print to 98
* Return: always 0
*/

void print_to_98(int n)
{

	for (; n < 99; n++)
	{
		printf("%d ", n);
	}
	for (; n > 99; n--)
	{
		printf("%d ", n);
	}
}
