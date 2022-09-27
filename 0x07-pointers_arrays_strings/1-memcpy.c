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

	if ((dest != NULL) && (src != NULL))
	{
		while (n)
		{
			*(dest++) = *(src++);
			--n;
		}
	}

return (dest);
}
