#include <stdio.h>
#include "main.h"

/**
 * factorial - a function to print the factorial of n.
 * @n: the number to get the factorial of.
 *
 * Description: a prog to compute the factorial of a number
 * using recursion.
 * Return: returns the factorial of "n". if n is < 0, return error
 * i.e., -1. return 1 for factorial of 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
