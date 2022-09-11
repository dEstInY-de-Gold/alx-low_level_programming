#include <stdio.h>

/*
 *prints all lowercase characters except q and e
 *
 *main - int initialised and takes no argument
 */

int main(void)
{

	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' || 'q')
			putchar(ch);
	}
	return (0);
}
