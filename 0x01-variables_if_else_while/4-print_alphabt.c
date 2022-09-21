#include <stdio.h>

/**
 * main - prints all lowercase characters except q and e
 *
 * Return: zero again
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		/*searches and skips chars 'e' and 'q'*/
		if (!(ch == 'e' || ch == 'q'))
			putchar(ch);
	}
	putchar('\n');
	/*exit status for main*/
	return (0);
}
