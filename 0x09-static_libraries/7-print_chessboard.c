#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - a function to print the chessboard.
 * @a: the 8 x 8 matrix to print out -> the chessboard.
 *
 * Description: a prog that prints out a chessboard. A
 * chessboard is similar to an 8 x 8 matrix. hence this
 * prog simply prints out an 8 x 8 matrix.
 * Return: void, returns no value.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
