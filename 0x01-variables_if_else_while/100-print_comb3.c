#include <stdio.h>

/**
 * main - entry method that runs a c program.
 * @void - void arg so main returns no value.
 *
 * Description: A prog to print a sequence of numbers with different
 * combinations of i and k.
 * Return: return 0 for success
 */

int main(void)
{
	int i;
	int k;
	int a;
	int b;

	i = 0;
	k = 1;

	for (i = 0; i <= 8; i++)
	{
		for (k = 1; k <= 9; k++)
		{
			a = i + '0';
			b = k + '0';

			if ((a != b) && (a < b))
			{
				putchar(a);
				putchar(b);

				if (k == 9 && i == 8)
				{
					putchar(' ');

				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
