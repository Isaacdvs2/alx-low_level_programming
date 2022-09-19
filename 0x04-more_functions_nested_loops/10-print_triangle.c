#include <stdio.h>
#include "main.h"

/**
 * print_triangle - a method to print a traingle.
 * @size: the size of the triangle.
 *
 * Description: a prog to print  triangle of size
 * 'size'. if size is zero or less, print a new line.
 * Return: no data returned.
 */

void print_triangle(int size)
{
	int i, j, k;

	k = size;

	while (size > 0 && k != 0)
	{
		for (i = 0; i < k; i++)
		{
			_putchar(' ');
		}
		for (j = i; j <= size; j++)
		{
			_putchar('#);
		}
		k--;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
