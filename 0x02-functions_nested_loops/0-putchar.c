#include <stdio.h>
#include "main.h"

/**
 * main - entry method of a c program.
 * @void - arg to let main return no value.
 *
 * Description: A c program to use putchar to print
 * the string "_putchar" to stdout using _putchar
 * method. include the main.h file which contains
 * prototypes of methods used here.
 * Return: 0 for sucess.
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');
	return (0);
}
