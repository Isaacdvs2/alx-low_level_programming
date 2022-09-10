#include <stdio.h>

/**
 * main - entry point of our program
 * @void - void method.
 *
 * Description: print size of int long, char and float
 * Return: return 0 for success
 */

int main(void)
{
printf("The size of a char: %i byte(s)\n", sizeof(char));
printf("The size of an int: %i byte(s)\n", sizeof(int));
printf("The size of a long int: %i byte(s)\n", sizeof(long int));
printf("The size of a long long int: %i byte(s)\n", sizeof(long long int));
printf("The size of a float: %i byte(s)\n", sizeof(float));
return (0);
}
