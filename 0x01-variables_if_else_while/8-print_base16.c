#include <stdio.h>

/**
 * main -  entry method of a c program.
 * @void - allows main to return no value.
 *
 * Description: a prog to print the nums of base 16
 * in lower case.
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
