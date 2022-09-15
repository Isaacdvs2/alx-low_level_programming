#include <stdio.h>
#include "main.h"

/**
 * times_table - method to print the 9 times table.
 * @void: takes no argumets
 *
 * Description: a prog to print the 9 times table.
 * Return: no value returned for void functions
 */

void times_table(void)
{
int a, b, result;

for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
		result = a * b;

		if (b == 0)
		{
			_putchar(result + '0');
		}
		else if (result < 10)
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		else
		{
			_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		if (b < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
}
