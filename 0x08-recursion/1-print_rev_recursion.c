#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion -  a prog to print the string in reverse.
 * @s: the string to print in reverse.
 *
 * Description: a prog that prints the string s in reverse.
 * Return: void, returns no value.
 */

void _print_rev_recursion(char *s)
{

	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
