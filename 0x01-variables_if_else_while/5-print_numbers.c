#include <stdio.h>

/**
 * main - the entry method of a c program.
 * @void - allows the main method to return no value.
 *
 * Description: A program to print single digits of base 10.
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%i", i);
	}
	printf("\n");
	return (0);
}
