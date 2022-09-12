#include <stdio.h>

/**
 * main - the entry point of the c program.
 * @void - allowws the main method to return no value
 *
 * Description: print the alphabet using putchar in lower
 * case followed by Upper case. Use the
 * ASCII codes to achieve the purpose.
 * Return: return 0 for sucess
 */

int main(void)
{
	char ch;
	char i;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}

	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
