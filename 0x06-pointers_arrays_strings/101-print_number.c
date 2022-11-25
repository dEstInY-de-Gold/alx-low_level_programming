#include "main.h"
#include <stdlib.h>

/**
 * _intlen - counts the number og digits of an integer
 * @num: the integer given
 *
 * Return: Length of integer.
 */

int _intlen(int num)
{
	int len = 0;

	while (num != 0)
	{
		len += 1;
		num /= 10;
	}

	return (len);
}

/**
 * power - computes power of a number
 * @num1: the base number
 * @num2: the exponent
 *
 * Return: the computed value'
 */

int power(int num1, int num2)
{
	int prod = 1;

	while (num2 >= 1)
	{
		prod *= num1;
		num2--;
	}
	return (prod);
}

/**
 * print_number - prints an integer to stdout.
 * @n: the given integer to print
 */

void print_number(int n)
{
	int len;

	len = _intlen(n);
	if (n < 0)
	{
		n = abs(n);
		_putchar('-');
/*		len -= 1; */
		while (n >= 10)
		{
			len--;
			_putchar(n / power(10, len) + '0');
			if ((n / (power(10, len))) / power(10, len - 1) == 0 && len > 1)
		{
				_putchar('0');
				n %= power(10, len - 1);
				len--;
				continue;
		}
			n %= power(10, len);
		}
	}
	else
	{
		while (n >= 10)
		{
			len--;
			_putchar(n / (power(10, len)) + '0');
			if ((n / (power(10, len))) / power(10, len - 1) == 0 && len > 1)
			{
				_putchar('0');
				n %= power(10, len - 1);
				len--;
				continue;
			}
			n %= power(10, len);
		}
		_putchar(n + '0');
	}
}
