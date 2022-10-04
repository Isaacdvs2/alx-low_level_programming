#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: 0 or 1
 */

int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
	if (s[i] < '0' || s[i] > '9')
		return (1);
	i++;
}
return (0);
}


/**
 * main - an entry point of a c program.
 * @argc: represents the num of arguments.
 * @argv: represent the pointer to the array of pointers.
 *
 * Description: a pro to add two nums passed to main
 * as arguments. If the arguments contain symbols, print Error.
 * If no num is passed, print 0.
 * Return: 0 for sucess.
 */

int main(int argc, char const *argv[])
{
int sum = 0;
while (--argc)
{
	if (isInteger(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[argc]);
}

printf("%i\n", sum);

return (0);
}
