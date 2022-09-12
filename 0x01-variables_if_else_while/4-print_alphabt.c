#include <stdio.h>

/**
 * main - entry method of a c program
 * @void - allows method to return no value
 *
 * Description: a program to print the alphabet except
 * for q and e. Use putchar to achieve the purpose.
 * Return: return 0 for success
 */

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
