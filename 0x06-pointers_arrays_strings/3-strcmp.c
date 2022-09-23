#include <stdio.h>
#include "main.h"

/**
 * _strcmp - a func to compare two strings.
 * @s1: the first string.
 * @s2: the second string to compare to s1.
 *
 * Description: a prog to compare two strings. if
 * s1 = s2, return 0, if s1 < s2, return < 0, if
 * s1 > s2, return > 0. If s1 and s2 is null, return
 * null.
 * Return: the ASCII difference of the two strings.
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return(s1[i] - s2[i]);
		}
	}
return (0);
}
