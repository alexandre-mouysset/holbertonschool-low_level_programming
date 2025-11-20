#include "main.h"

/**
 * print_chessboard - Prints an 8x8 chessboard
 * @a: Pointer to a 2D array representing the chessboard
 *
 * Description: Each element of the array represents a square on the board.
 *              The function prints the board row by row using _putchar.
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
