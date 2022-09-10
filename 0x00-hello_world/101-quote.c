#include <unistd.h>

/**
 * main - entry point of our program
 * @void - voids our main to return no value
 *
 * Description: write to stdout without using any stdio.h functions
 * Return: 0 for success
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
