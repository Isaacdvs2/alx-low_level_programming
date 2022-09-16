#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - a method to print nums
 * @void: takes no arguments.
 *
 * Description: a prog to print nums except 2 and 4.
 * Return: no return value
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');

}
