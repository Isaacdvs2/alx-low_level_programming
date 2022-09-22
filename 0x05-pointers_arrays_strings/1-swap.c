#include <stdio.h>
#include "main.h"

/**
 * swap_int - a method to swap a and b suing pointers.
 * @a: the first pointer that points to the value a.
 * @b: the second pointer that points to the value b.
 *
 * Description: a prog to swap the values of a and b
 * using pointers as arguments.
 * Return: void, returns no value.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
