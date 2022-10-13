#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function to print the name.
 * @name: is the pointer to the name to print.
 * @f: the pointer to the function to be called back.
 *
 * Description: a function to print a name using a
 * function to a pointer as one of the arguments.
 * Return: void, nothing is returned.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
