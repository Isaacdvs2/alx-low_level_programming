#include "lists.h"

/**
 * b4Main - is a function that executes before main function.
 *
 * Description: a prog that outputs a string before main is executed.
 * Return: void, no data returned.
 */

void __attribute__ ((constructor)) b4Main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
