#include <stdio.h>
#include "main.h"

/**
 * puts_half - a method to print half of a string.
 * @str: an argument that represent the string.
 *
 * Description: a prog that prints half of the string. If
 * the string length is odd, exclude the last character.
 * Return: void, returns no value.
 */

void puts_half(char *str)
{
	int i;
	int len;
	int j;
	int k;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (j = 0; str[j] <= str[len / 2]; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (len % 2 != 0)
	{
		for (k = 0; str[k] <= str[(len - 1) / 2]; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
