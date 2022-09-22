#include <stdio.h>
#include "main.h"

/**
 * puts2 - a method that prints every other string character.
 * @str: an arg that represent the string.
 *
 * Description: a prog that prints string characters by
 * skipping every consecutive char.
 * Return: void, returns no value.
 */

void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
