#include <stdio.h>

/**
 * main - entry point of a c program.
 * @void - allows main to return no value.
 *
 * Description: a program to print base 10 nums
 * using putchar and no var of type char.
 * Return: 0 for sucess
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
