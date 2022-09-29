#include <stdio.h>
#include "main.h"

/**
 * _int_sqrt_recursion - a function to compute the sqrt of n.
 * @n: the num to compute the sqrt for.
 *
 * Description: a prog that computes the sqrt of n using
 * recursion.
 * Return: the sqrt of n as an int. if n does not have a natural
 * sqrt, return -1.
 */

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - a function to compute the square of n.
 * @n: the number to find the square of.
 * @rt:the sqrt.
 *
 * Description: the square function computes the square of n
 * using recursion.
 * Return: the square of n as int.
 */


int square(int n, int rt)
{
	if (rt * rt == n)
	{
		return (n);
	}

	else if (rt * rt < n)
	{
		return (square(n, rt +1));
	}

	else
	{
		return (-1);
	}
}
