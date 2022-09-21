#include <stdio.h>

/**
 * main - outputs lowercase chars in reverse form
 *
 * Return: zero
 */

int main(void)
{
	/*defines the char variable*/
	char ch;

	/*initialise chars and start ouput reversively*/
	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
