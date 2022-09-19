#include <stdio.h>
#include "main.h"

/**
 * print_square - a prog to print the square.
 * @size: the size of the square.
 *
 * Description: a prog to print the square of size 'size'
 * using 3 characters. If size is <= zero, print a new line.
 * Return: return no value
 */

void print_square(int size)
{
	int i, j;

	if (size == 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			_putchar('#');
		}

		_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
