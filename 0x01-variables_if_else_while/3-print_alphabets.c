#include <stdio.h>

/*
 *Alphabet game - print all lowercase letters followed by all uppercase letters
 *
 *main - declared is int with no initial argument
 */

int main(void)
{
	/*initialise lowercase characters*/
	char ch;
	/*initialise uppercase characters*/
	char CH;
	/*prints lowercase chars*/
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	/*prints uppercase chars*/
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
