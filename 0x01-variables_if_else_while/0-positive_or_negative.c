#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is the entry point of a c program.
 * @void - void arg lets our method return no value.
 *
 * Description: A program that prints whether n is positive
 * or negative. n is randomly generated.
 * Return: return 0 for success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	if ((n < 0) & (n != 0))
	{
	printf("%d is negative\n", n);
	}
	else
	{
	printf("%d is zero\n", n);
	}
	return (0);
}
