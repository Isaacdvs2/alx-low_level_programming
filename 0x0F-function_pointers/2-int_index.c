#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an iinteger.
 * @array: rthe array to search the int from.
 * @size: the number of elements in the array.
 * @cmp: the pointer to the function to be called to compare
 * the values.
 *
 * Desription: a prog that uses pointer to a function to
 * search for an int in the array.
 * Return: return the int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
