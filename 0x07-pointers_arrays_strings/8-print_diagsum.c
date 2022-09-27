#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function to print the diagnoal sum of a matrix.
 * @a: an array to compute the diagonal sum on.
 * @size: size of the array "a".
 *
 * Description: a prog that computes the digonal sum of the array
 * of size n.
 * Return: void, no value is returned.
 */

void print_diagsums(int *a, int size)
{
	int i, result, result2;

	result = 0;
	result2 = 0;
	i = 0;
	result3 = size - i;

	for (i = 0; i < size; i++)
	{
		result += a[i];
		result2 += a[result3 - 1];
		a += size;
	}
	printf("%d, ", result);
	printf("%d\n", result2);
}
