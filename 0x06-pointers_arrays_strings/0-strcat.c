#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function to concatenate two strings.
 * @dest: the string to cancatenate to.
 * @src: the string to concatenate with dest.
 *
 * Description: A prog similar to C's own strcat. The
 * prog concatenates dest with src and returns a pointer
 * to dest. NB: the dest string must not be a literal string,
 * dest must be large enough to store src, and the memory
 * regions pointed to by dest and src must not overlap ->
 * meaning you cannot use either dest/src for both dest and src or
 * pointer to either dest/src in both. How it works? 1. Loop through
 * dest and stop at null char. 2. Loop through src and append
 * to dest from null char, overwriting it. 3. append the null
 * char at the end of the updated/appended dest. The end of the
 * updated dest is found by adding i + j.
 * Return: the dest string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != 0; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
return (dest);
}
