#include <stdio.h>

/**
 * main - prints numbers in base16
 *
 * Return: zero again
 */

int main(void)
{
	int num;
	char ch;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
