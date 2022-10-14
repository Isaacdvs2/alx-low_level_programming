#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - a func to prints all numbers with a separator.
 * @separator: a char or string to separate the numbers.
 * @n: number of undefined arguments.
 *
 * Description: aprog to print the numbers passed as args to the
 * function of variadic type. If separator is null, nothing is
 * printed.
 * Return: void, returns no value.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);

putchar('\n');
}
