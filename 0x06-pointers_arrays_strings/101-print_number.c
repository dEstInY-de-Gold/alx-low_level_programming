#include "main.h"

/**
 * print_number - prints an integer to stdout.
 * @n: the given integer to print
 */

void print_number(int n)
{
	while (n >= 10)
	{
		_putchar(n / (n/10) + '0');
		n /= 10;
	}
	_putchar(n + '0');
}
