#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - a void method to print 24hr time.
 * @void: lets our method return no value.
 *
 * Description: a prog to print every minute of the
 * day from 0.00 -> 23:59. _putcharonly is allowed.
 * Return: no value is returned
 */

void jack_bauer(void)
{
int i, j, k, l, a, b, c, d;

for (i = 0; i <= 2; i++)
{
	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 5; k++)
		{
			for (l = 0; l <= 9; l++)
			{
				a = i + '0';
				b = j + '0';
				c = k + '0';
				d = l + '0';
				_putchar(a);
				_putchar(b);
				_putchar(':');
				_putchar(c);
				_putchar(d);
				_putchar('\n');

				if (a == 2)
				{
					b = 3;
				}
			}
		}
	}
}
}
