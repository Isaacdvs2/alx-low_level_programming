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

char *_strncpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
return (dest);
}
