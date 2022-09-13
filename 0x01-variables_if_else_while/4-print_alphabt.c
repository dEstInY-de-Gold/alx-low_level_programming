#include <stdio.h>

/*
 *main - prints all lowercase characters except q and e
 *
 *int initialised and takes no argument
 */

int main (void)
{

	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (!(ch == 'e' || ch == 'q'))
			putchar(ch);
	}
	putchar('\n');
	/*exit status for main*/
	return (0);
}
