#include <stdio.h>
#include "main.h"

/**
 * cap_string - a function to capitalize a string.
 * @s: the string to capitalise.
 *
 * Description: a prog to capitalise the first word of
 * a string.
 * Return: the capitalised string.
 */

char *cap_string(char *s)
{
char sep[] = "'\t;\n; .!?\"(){}";
int flag, i, j;

for (i = 0; s[i] != '\0'; i++)
{
	flag = 0;

	if (i == 0)
	{
		flag = 1;
	}
	else
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i - 1] == sep[j])
			{
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] -= ('a' - 'A');
		}
	}
}
return (s);
}
