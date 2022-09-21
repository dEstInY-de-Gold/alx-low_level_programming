#include "main.h"

/**
 * print_rev - prints input string in reverse format
 * @s: input argument to function
 *
 * Return: 1 on success or -1 otherwise
 */


void print_rev(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	while (l > 0)
	{
		_putchar(s[--l]);
	}
	_putchar(10);
}
