#include <stdio.h>
#include "main.h"

/**
 * main - entry point of a c program.
 * @argc: represents the num of args to main.
 * @argv: a pointer of pointers to arrays which
 * represents the arguments thmeselves
 *
 * Description: a prog that displays the arguments
 * passed to the program.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
return (0);
}
