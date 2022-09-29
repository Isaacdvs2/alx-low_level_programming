#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - a function to return the length of a string.
 * @s: the string to compute the length of.
 *
 * Description: a prog that computes the length of the string "s"
 * using recursion technique.
 * Return: the length of the string as an integer.
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s != '\0')
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
