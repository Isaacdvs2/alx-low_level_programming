#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a method to print the alphabet.
 * @void - allows the method to return no value.
 *
 * Description: The print_alphabet method prints
 * the alphabet in one line followed by a new
 * line to stdout using the _putchar method.
 * Return: 0 for success.
 */

void print_alphabet(void)
{
	char c;

	for (c= 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
