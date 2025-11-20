#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if all arguments are valid or no arguments,
 *         1 if an argument contains a non-numeric character
 *         ("Error" is printed in that case).
 */

int main(int argc, char **argv)
{
	int i, j;
	int somme = 0;

	if (argc - 1 == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		somme = somme + atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}


