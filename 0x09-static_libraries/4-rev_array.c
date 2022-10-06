#include <stdio.h>
#include "main.h"

/**
 * reverse_array - a method that reverses the contents of an array.
 * @a: the array to reverse.
 * @n: the num of elements of the array.
 *
 * Description: a prog to reverse the contents of an array of
 * length n. create a temporary int var and start position var
 * temp_start. Use in place algorithm to read elements of the
 * array from both ends and swapping them.
 * Return: void, no value is returned
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int temp_start;

	temp_start = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[temp_start];
		a[temp_start] = temp;
		temp_start--;
	}
}
