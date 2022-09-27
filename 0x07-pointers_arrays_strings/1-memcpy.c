#include <stdio.h>
#include "main.h"

/**
 * _memcpy - a function to copy a memory area.
 * @dest: the destination memory area.
 * @src: the source memory area.
 * @n: the number of times to copy src to dest.
 *
 * Description: A prog to copy memory area from src
 * to dest, n times.
 * Return: the dest array.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; dest[i] != '\0' && n > 0 && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
