#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a method to print to 98.
 * @n: the number to count to 98.
 *
 * Description: a prog to print from n to
 * 98.
 * Return: no return val
*/

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
