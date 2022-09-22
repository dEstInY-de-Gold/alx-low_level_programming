#include "main.h"

/**
 * puts_half - to print second half of a string
 *
 * @str: pointer to the input argument
 */

void puts_half(char *str)
{
	int len;
	int len2;

	len = 0;
	while (str[len] != '\0')
		len++;

	len2 = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
	while (str[len2] != '\0')
		_putchar(str[len2++]);
	_putchar(10);
}
