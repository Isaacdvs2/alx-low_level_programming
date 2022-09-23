#include <stdio.h>
#include "main.h"

/**
 * string_toupper - a method to change all lowercase letters to upper.
 * @s: a pointer to the string.
 *
 * Description: a prog to print all lowercase letters of a string to
 * uppercase.
 * Return: the pointer to the string.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
return (s);
}
