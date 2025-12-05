#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for testing append_text_to_file function
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: 0 on success
 *
 * Description:
 *   Checks that exactly two arguments are provided: filename and text.
 *   If not, prints a usage message to standard error and exits with 1.
 *   Calls append_text_to_file with the given filename and text, then
 *   prints the result of the operation.
 */

int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
