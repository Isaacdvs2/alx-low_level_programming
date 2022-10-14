#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - a func to prints all strings with a separator.
 * @separator: a char or string that separates the strings printed.
 * @n: number of undefined arguments.
 *
 * Description: a prog that prints out the strings passed as
 * arguments to the function separated by a char/string defined.
 * Return: void, returns no data.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char*);
		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

putchar('\n');
}
