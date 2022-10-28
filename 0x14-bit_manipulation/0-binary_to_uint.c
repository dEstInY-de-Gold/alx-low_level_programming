#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: input string of binary number
 *
 * Return: number in base ten.
 */

int _pow(int x, int y);

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i, i2 = 0, i3, n;

	i = 0;
	if (b == NULL)
		return (0);
	while (b[i2] != '\0')
	{
		if (b[i2] == '0' || b[i2] == '1')
			i++;
		else
			return (0);
		i2++;
	}
	i3 = 0;
	i--;
	while (i >= 0)
	{
		if (b[i3] == 48)
			n = 0;
		if (b[i3] == 49)
			n = 1;
		dec += n*_pow(2, i);
		i--;
		i3++;
	}
	return (dec);
}

/**
 * _pow - calculates power of an int
 * @x: number
 * @y: exponential
 *
 * Return: power of x.
 */

int _pow(int x, int y)
{
	int prod = 1;

	while (y > 0)
	{
		prod *= x;
		y--;
	}
	return (prod);
}
