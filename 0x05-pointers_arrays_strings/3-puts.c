#include "main.h"

/**
 * _puts - prints to stdout
 * @str: input argument
 *
 * Return: more than 1 on success
 */


void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);

/*
	write(1, str, 1i
*/
}
