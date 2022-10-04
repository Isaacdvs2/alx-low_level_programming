#include <stdio.h>

/**
 * main - the entry method of a c program.
 * @argc: represent the number of arguments passed to main.
 * @argv: represent the pointer to the arguments themselves.
 *
 * Description: a c program that writes the number of arguments
 * passed to it.
 * Return: return 0 for success.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{

		if (argc == 1)
		{
			printf("%i\n", 0);
		}

		else if (argc > 1)
		{
			printf("%i\n", argc - 1);
		}
return (0);
}
