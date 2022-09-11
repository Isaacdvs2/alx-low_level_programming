#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is the entry point of a c program.
 * @void - void arg lets our method return no value.
 *
 * Description: A program that prints whether last_n is positive
 * or negative or zero. last_n is the last number of a randomly generated
 * integer.
 * Return: return 0 for success
 */

int main(void)
{
	int n;
	int last_n;
	char mystr[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;

	if (last_n == 0)
	{
		printf("%s %i and is 0\n", mystr, last_n);
	}
	if ((last_n >= 5) && (last_n < 6) && (last_n != 0))
	{
		printf("%s %i and is greater than 5", mystr, last_n);
	}
	if ((last_n <= 6) && (last_n != 5) && (last_n != 0))
	{
		printf("%s %i and is less than 6 and not 0", mystr, last_n);
	}
	return (0);
}
