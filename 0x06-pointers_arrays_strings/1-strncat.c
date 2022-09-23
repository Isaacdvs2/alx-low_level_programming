#include <stdio.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: the string to concatenate to.
 * @src: the string to concatenate with dest.
 * @n: num of bytes to use from src.
 *
 * Description: A prog to concatenate two strings, dest
 * and src, n times. Similar to 0-strcat, but this time
 * only append n times.
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len, start;

	while (dest[i] != '\0')
	{
		i++;
	}

	len = i;
	start = len - 1;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[start + j] = src[j];
	}
	dest[i + j] = '\0';
return (dest);

}
