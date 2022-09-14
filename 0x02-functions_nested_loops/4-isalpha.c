#include <stdio.h>
#include "main.h"

/**
 * _isalpha - a method to check alphabets.
 * @c: an int argument.
 *
 * Description: A method to check if an int falls
 * in the ASCII num codes for alphabetical chars.
 * Alpha chars a-z falls in range 97 -> 122 and
 * A-Z in range 65 -> 90.
 * Return: return 1 if c is true and 0 if c is false.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) ||  (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
