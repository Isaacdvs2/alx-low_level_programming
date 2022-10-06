#include <stdio.h>
#include "main.h"

/**
 * print_array - a method to print elements of an array.
 * @a: is the array of integers to be printed.
 * @n: is the number of array elements to print out.
 *
 * Description: a prog to print n elemenys fof an int array.
 * The numbers must be separated by a comma and space. The nums
 * must be displayed in the same order as in the array.
 * Return: void, no value is returned.
 */

void print_array(int *a, int n)
{
	int i;
	int len;
	int j;

	for (j = 0; a[j] != '\0'; j++)
	{
		len++;
	}

	for (i = 0; i <= n; i++)
	{
		if ((a[i] != '\0') && (n <= len))
		{
			printf("%i", a[i]);
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
