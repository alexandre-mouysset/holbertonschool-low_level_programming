#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for testing read_textfile function
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: 0 on success
 *
 * Description:
 *   Checks that the program receives exactly one filename argument.
 *   If not, prints a usage message to standard error and exits with 1.
 *   Calls read_textfile with the provided filename and different sizes,
 *   printing the number of characters successfully read each time.
 */

int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
