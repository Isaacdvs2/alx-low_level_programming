#include <stdio.h>
#include "main.h"

/**
 * print_sign - a method to print the sign of a number.
 * @n: an arg representing the num to predict the
 * sign of.
 *
 * Description: a program to print the sign of a given
 * number. + for positive nums, - for neg nums, and 0 for zero
 * with appropriate print messages.
 * Return: 1 for pos, 0 for zero, -1 for negatives.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
