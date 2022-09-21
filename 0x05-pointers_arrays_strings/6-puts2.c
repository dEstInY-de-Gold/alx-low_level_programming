#include "main.h"

/**
 * puts2 - prints input string at start of first character
 *
 * @str: input string to gunction
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
