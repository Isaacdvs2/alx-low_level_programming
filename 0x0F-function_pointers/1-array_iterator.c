#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function to iterate an array.
 * @array: is the array to apply the function on.
 * @size: the size of the array.
 * @action: is the function to call-back that will
 * act on the array. "action" is the pointer to the function.
 *
 * Description: a prog that calls back a function and
 * executes that function on an array of size size.
 * Return: void, returns no data.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
