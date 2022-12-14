#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - a method to print the alphabet.
 * @void - allows the method to return no value.
 *
 * Description: The print_alphabet method prints
 * the alphabet in one line ten times followed by a new
 * line to stdout using the _putchar method._putchar
 * method must be used only twice.
 * Return: no return statement for null method.
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
