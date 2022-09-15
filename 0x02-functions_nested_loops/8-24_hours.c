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
int i, j, k, l;

for (i = 0; i <= 2; i++)
{
	for (j = 0; j <= 3; j++)
	{
		for (k = 0; k <= 5; k++)
		{
			for (l = 0; l <= 9; l++)
			{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');

				if (i + k + j + l == 19)
				{
					break;
				}
			}
		}
	}
}
}
