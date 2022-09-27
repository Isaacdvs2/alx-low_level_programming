#include <stdio.h>
#include "main.h"

/**
 * _memset - a function to fill a memory with a constant byte.
 * @s: the array or mem space to fill with the constant byte.
 * @b: the constant byte.
 * @n: the number of bytes to use.
 *
 * Description: a prog that fills a memeory space with a constant
 * byte, n times.
 * Return: the filled mem space.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; s[i] != '\0' && n > 0; i++)
	{
		s[i] = b;
		n--;
	}
return (s);
}
