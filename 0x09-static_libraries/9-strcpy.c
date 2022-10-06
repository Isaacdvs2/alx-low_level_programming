#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function to copy a string n times.
 * @dest: the array/buffer to copy to.
 * @src: the string to copy.
 *
 * Description: A prog to copy a string src to buffer
 * n times. Returns null if no memeory is allocated to
 * dest.
 * Return: the dest pointer.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
return (dest);
}
