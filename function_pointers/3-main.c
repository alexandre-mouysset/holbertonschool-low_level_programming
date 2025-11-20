#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations on two numbers
 * @argc: number of command line arguments
 * @argv: array of command line argument strings
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{

	int (*operator)(int, int);
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", operator(num1, num2));
	return (0);
}
