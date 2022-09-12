#include <stdio.h>

/**
 *main - prints lowercase characters
 *
 * prints lowercase chars
 */

int main (void)
{
	char ch;
	/*iterate over chars and prints them*/
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);
	/*prints newline*/
	putchar ('\n');
	return (0);
}
