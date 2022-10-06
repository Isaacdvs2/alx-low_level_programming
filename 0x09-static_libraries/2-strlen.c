#include <stdio.h>
#include "main.h"

/**
 * _strlen - a method to return the length of a string.
 * @s: an arg that represent the pointer to the string.
 *
 * Description: a prog that accepts a string and returns its
 * length.NB, strings are arrays of characters in c, hence are
 * accessed using array like operations. A string in C starts at
 * index 0 and ends before the null terminator, '\0'. for us to
 * get the length, we loop the string from index 0 till
 * the null terminator, counting the number of string elements.
 * Return: the length of the string as a number.
 */

int _strlen(char *s)
{
	int i;
	int len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
return (len);
}
