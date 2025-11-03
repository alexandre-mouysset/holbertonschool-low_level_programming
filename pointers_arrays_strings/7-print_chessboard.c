#include "main.h"

/**
 * _strstr - Locates a substring in a string
 * @haystack: Pointer to the string to be scanned
 * @needle: Pointer to the substring to search for
 *
 * Return: A pointer to the first occurrence of needle in haystack,
 *         or NULL if needle is not found
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
