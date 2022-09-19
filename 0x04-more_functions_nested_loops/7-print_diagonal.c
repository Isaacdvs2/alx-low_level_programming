#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a method to print a diagonal
 * @n: arg for the lengthof the diagonal.
 *
 * Description: a prog to print the length of a diag.
 * for a diag of length 0 or less, print new line.
 * Return: no value returned
 */

void print_diagonal(int n)
{
	int i, j;
	i = 0;

	if (n > 0 && i < n)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <  i; j++)
			{
				if (i <= 0)
				{
					continue;
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
