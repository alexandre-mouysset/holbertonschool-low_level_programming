#include "main.h"
#include <stdio.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 if extra arguments are given
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc);
	(void)argv;
	return (0);
}
