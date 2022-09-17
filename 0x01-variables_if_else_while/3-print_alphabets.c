#include <stdio.h>

/*
 * main - print all lowercase letters followed by all uppercase letters
 *
 * declared is int with no initial argument
 *
 * Return: zero as usual
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
	/*exit status*/
	return (0);
}
