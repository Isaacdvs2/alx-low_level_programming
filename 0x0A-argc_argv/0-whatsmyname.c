#include <stdio.h>
#include "main.h"

/**
 * main -  is the entry point of a c program.
 * @argc: represent the number of arguments.
 * @argv: represent a pointer to pointers of arrays
 * which represent the actual arguments.
 *
 * Description: a program that writes its name to std out
 * followed by a new line. We know that that for argc > 1,
 * argv[0] is the name of the program and argv[argc] is the
 * null pointer. anything in between 0 and the null pointer
 * is the actual arguments.
 * Return: return 0 for success.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
return (0);
}
