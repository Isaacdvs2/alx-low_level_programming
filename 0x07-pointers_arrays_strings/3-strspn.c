#include "main.h"

/**
 * *_strspn - a func that returns the number of occurence of a string.
 * @s: string to check.
 * @accept: the string to match in s.
 *
 * Description: a prog that eturns the num of times accept is
 * found in s.
 * Return: the num of occurence of accept in s.
 */


unsigned int _strspn(char *s, char *accept)
{
	int i, j, cnt;

	cnt = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cnt++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (cnt);
}
