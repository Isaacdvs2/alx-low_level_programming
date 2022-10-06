#include <stdio.h>
#include "main.h"

/**
 * _isupper - method to check for upper case letters.
 * @c: arg to test.
 *
 * Description: a prog that checks for uppercase chars.
 * Return: return 1 if uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
