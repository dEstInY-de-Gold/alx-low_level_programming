#include "main.h"

/**
 * main - takes no argument with a return value in integer
 *
 * Return: nothing
 */

int main(void)
{
	int i;
	char *ch;

	ch = "_putchar";
	i = 0;
	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
