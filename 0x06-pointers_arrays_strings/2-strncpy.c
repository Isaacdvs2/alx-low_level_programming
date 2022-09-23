#include <stdio.h>
#include "main.h"

/**
 * _strncpy - a function to copy a string n times.
 * @dest: the array/buffer to copy to.
 * @src: the string to copy.
 * @n: the num of times to copy src to dest.
 *
 * Description: A prog to copy a string src to buffer
 * n times. Returns null if no memeory is allocated to
 * dest.
 * Return: the dest pointer.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *cp_dest;

	cp_dest = dest;

	if ((dest == NULL) && (src == NULL))
	{
		return (NULL);
	}

	for (i = 0; n >= 0; n--; i++)
	{
		dest[i] = src[i];
	}
	dest = '\0';
return (cp_dest);
}
