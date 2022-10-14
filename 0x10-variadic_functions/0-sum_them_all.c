#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - is a unction to sum the arguments passed to it.
 * @n: the variable number of args to pass.
 *
 * Description: a prog that uses a func that takes a variable
 * number of arguments and adds them up.
 * Return: the sum of the parameters. if n is zero, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args_ptr;

	va_start(args_ptr, n);

	sum = 0;

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args_ptr, int);
	}
	va_end(args_ptr);
return (sum);
}
