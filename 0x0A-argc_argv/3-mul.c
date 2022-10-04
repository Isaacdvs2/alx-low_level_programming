#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry method of a c program.
 * @argc: represent the num of args passed to a program.
 * @argv: represent the arguments themselves as an array.
 *
 * Description: a c program that multiplie two args and prints
 * out their product.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}

	else
	{
		printf("Error\n");
	}
return (0);
}
