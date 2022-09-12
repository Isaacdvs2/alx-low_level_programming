#include <stdio.h>

/**
 * main - entry method of a c program.
 * @void - allows main to return no value.
 *
 * Description: a prog to print the small case alpha
 * in reverse followed by a new line
 * Return: 0 for success
 */

int main(void)
{
	char ch;

	for (ch = 122; ch != 96; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
