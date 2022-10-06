#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a method to check for a digit
 * @c: an arg to check.
 *
 * Description: a prog to check if c is a digit
 * or not.
 * Return: 1 for a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
