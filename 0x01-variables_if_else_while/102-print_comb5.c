#include <stdio.h>

/**
 * main - method to execute a c program.
 * @void - arg to let main return no value.
 *
 * Description: prog to print a combination of four
 * nums separated by a space where each combination
 * is unique followed by
 * a new line. Allowed to use putchar a max of
 * eight times in code.
 * Return: 0 for success.
 */

int main(void)
{
int i;
int j;
int k;
int n;
int a;
int b;
int c;
int d;

for (i = 0; i <= 9; i++)
{
	for (k = 0; k <= 8; k++)
	{
		for (n = 0; n <= 9; n++)
		{
			for (j = 1; j <= 9; j++)
			{
				a = i + '0';
				b = k + '0';
				c = n + '0';
				d = j + '0';
				if (a + b < c + d)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (i + k + n + j == 35)
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
}
return (0);
}
