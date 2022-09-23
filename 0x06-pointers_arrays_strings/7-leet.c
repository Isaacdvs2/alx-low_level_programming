#include <stdio.h>
#include "main.h"

/**
 * leet - is a program to encode a string.
 * @s: the arg that represent the string to encode.
 *
 * Description: a program to encode a string into
 * 1337.
 * Return: the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char enc1 = "aeotl";
	char enc2 = "AEOTL";
	char enc3 = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
		 if (s[i] == encc1[i] || s[i] == enc2[i])
			 s[i] = enc3[i];
		 	break;
		}
	}
return (s);
}
