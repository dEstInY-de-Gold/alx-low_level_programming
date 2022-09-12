#include <stdio.h>

/*
 *prints lowercase chars
 *
 *main - int initialised with no argument
 */

int main(void)
{
	char ch;
	/*iterate over chars and prints them*/
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	/*prints newline*/
	putchar('\n');
	return (0);
}
