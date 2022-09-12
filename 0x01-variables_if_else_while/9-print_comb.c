#include <stdio.h>

/**
 * main - entry point of a c prog.
 * @void - allows main to retirn no value.
 *
 * Description: a prog to print single combinations of
 * single digit nums.
 * Return: return 0 for success
 */


int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
