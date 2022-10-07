#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates a memory using malloc.
 * @b: represents the ammount of bytes to allocate.
 *
 * Description: a prog that allocates an amount of memory using malloc.
 * If malloc fails, the program exits normally with a value of 98.
 * Return: a pointer to the memory.
 */

void *malloc_checked(unsigned int b)
{
        void *p;

        p = malloc(sizeof(int) * b);

        if (p == NULL || p == 0)
                exit(98);
return (p);
