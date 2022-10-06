#include <stdio.h>

/**
 * main - an entry method of a c program.
 * @void: takes no arguments.
 *
 * Deascription: a prog to print nums 1 to 100. For
 * a num that is a multiple of 3, print Fizz, For a
 * multiple of 5, print Buzz. For a multiple of both
 * print FizzBuzz.
 * Return: 0 for success.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
			printf(" ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%i", i);
			printf(" ");
		}
	}
	printf("\n");
return (0);
}
