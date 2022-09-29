#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - a function to print a string using recursion.
 * @s: the string to print out.
 *
 * Description: a prog to print the string to std out using recursion
 * and the _putchar function only.
 * Return: void, return no value.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
