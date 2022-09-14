#include <stdio.h>
#include "main.h"

/**
 * _islower - a method to check for lower case chars.
 * @c: an int arg.
 *
 * Description: a method to check for lower case chars.
 * Uses the ASCII codes to do so. Lower case chars in
 * ASCII tablle range from 97 to 122.
 * Return: 1 for success and 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
