#include "main.h"


/**
 * _puts_recursion - Prints characters of a string recursively
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar('\n');
}
