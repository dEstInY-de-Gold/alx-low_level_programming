#include "main.h"

/**
 * print_numbers - prints from 0 to 9 to stdout
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}