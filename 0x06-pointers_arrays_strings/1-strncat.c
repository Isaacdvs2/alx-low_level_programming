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
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
return (dest);

}
