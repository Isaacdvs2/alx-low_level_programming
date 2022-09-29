#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function to compute the power of a number.
 * @x: the base number.
 * @y: the power.
 *
 * Description: a prog that returns the value of x raised to the
 * power y.
 * Return: returns the value of x ^ y. If y < 0, return -1.
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return(x * _pow_recursion(x, y - 1));
	}
}
