#include <stdio.h>
#include "main.h"

/**
 * _puts - a method to print a string to std out.
 * @str: an arg representing the string to print out.
 *
 * Description: a prog to print a given string. Keep a
 * loop counter variable to count the number of loops and
 * index the array. Use indexing to access the values of
 * the string with the _putchar method.
 * Return: void, no value returned.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
