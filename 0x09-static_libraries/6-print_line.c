#include <stdio.h>
#include "main.h"

/**
 * print_line - a method to print a line.
 * @n: an arg to determine the length of the line.
 *
 * Description: a prog to print a line of length n.
 * if n is 0 or less, print a new line only.
 */

void print_line(int n)
{
	char c;
	 c = '_';

	while (n > 0)
	{
		_putchar(c);
		n--;
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
