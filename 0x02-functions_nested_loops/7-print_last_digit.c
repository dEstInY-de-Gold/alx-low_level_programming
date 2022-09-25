#include "main.h"

/**
 * print_last_digit - prints thelast digit of a number
 * @n: input parameter
 *
 * Return: last digit
 */


int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}
