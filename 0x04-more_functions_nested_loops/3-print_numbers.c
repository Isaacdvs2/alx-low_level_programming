#include <stdio.h>
#include "main.h"

/**
 * print_numbers - a method to print nums.
 * @void: takes no arguments
 *
 * Description: aprog to print nums from 0 - 9,.
 * Return: returns no data
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
