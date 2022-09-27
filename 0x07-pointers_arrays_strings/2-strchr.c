#include <stdio.h>
#include "main.h"

/**
 * _strchr - check for the occurence of a char.
 * @s: the string to check for char.
 * @c: the char to check in s.
 * Description: a function to check for the first
 * occurance of a character. The function
 * returns the first occurance of c in s, or else
 * returns null.
 * Return: null if c not in s.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; c != '\0' && s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
return ('\0');
}
