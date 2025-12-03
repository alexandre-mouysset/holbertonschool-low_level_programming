#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print table
* @n: print to 98
* Return: always 0
*/

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
		return;
	}
	else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}

	printf("98");
	printf("\n");
}

