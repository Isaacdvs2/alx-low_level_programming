#include <stdio.h>
#include "main.h"

/**
 * more_numbers - a method to print nums.
 * @void: takes no arguments.
 *
 * Description: a prog to print nums 0 - 14
 * ten times. allowed to use _putchar only
 * three times in code.
 * Return: no returned data.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
