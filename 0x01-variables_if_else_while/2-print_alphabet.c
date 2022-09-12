#include <stdio.h>

/**
 * main - the entry point of the c program.
 * @void - allowws the main method to return no value
 *
 * Description: print the alphabet using putchar. Use the
 * ASCII codes to achieve the purpose.
 * Return: return 0 for sucess
 */

int main(void)
{
	char ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
