#include <stdio.h>

/**
 * main - method to execute a c program.
 * @void - arg to let main return no value.
 *
 * Description: prog to print a combination of three
 * nums where each combination is unique followed by
 * a new line. Allowed to use putchar a max of
 * six times in code.
 * Return: 0 for success.
 */

int main(void)
{
	int i;
	int j;
	int k;
	int a;
	int b;
	int c;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				a = i + '0';
				b = j + '0';
				c = k + '0';

				if ((a != b && b != c) && ((a < b) && (b < c)))
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (k + j + i == 24)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
