#include <stdio.h>
#include "main.h"

/**
 * rev_string - a method to reverse a string.
 * @s: an arg that represent the string.
 *
 * Description: A prog to reverse a string using. We will need
 * two things, a loop counter
 * variable to keep track of the number of string elements
 * and to give us the length of the string. Using the length
 * of the string, loop backward and store the elements in the
 * variable.
 * Return: void, no value returned.
 */

void rev_string(char *s)
{
	int i;
	int len;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		len = i;

	char c[len];

	j = 0;

	for (len; len >= 0; len--)
		c[j] = **s[len];
}
