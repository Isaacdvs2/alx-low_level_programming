#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a method to print the last num of a number.
 * @int: takes an int arg and returns its last num.
 *
 * Description: a prog that takes an int num and returns the last
 * number of that integer.
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int last_n;
	last_n = n % 10;

	return (last_n);
}
