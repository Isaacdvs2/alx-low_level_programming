#include <stdio.h>
#include "main.h"

/**
 * print_rev - a method to print a string in reverse.
 * @s: an arg that represent the string.
 *
 * Description: A prog to print a string in reverse using
 * _putchar only. We will need two things, a loop counter
 * variable to keep track of the number of string elements
 * and to give us the length of the string. Using the length
 * of the string, loop backward and print the string.
 * Return: void, no value returned.
 */

void print_rev(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
		len = i;

	for (len = i; len >= 0; len--)
		_putchar(s[len]);
_putchar('\n');
}
