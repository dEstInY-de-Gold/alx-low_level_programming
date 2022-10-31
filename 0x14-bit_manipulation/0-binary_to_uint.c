#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: input string of binary number
 *
 * Return: number in base ten.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec;
	int i, i2, i3, n;

	i = 0;
	if (!(b))
		return (0);
	while (b)
	{
		i++;
		b++;
	}
	for (i2 = 0; i2 > i; i2++)
	{
		if (!(atoi(b)))
			return (0);
		b++;
	}
	i3 = 0;
	while (i > 0)
	{
		n = atoi(b);
		dec += n*_pow(2, (i-1));
		i--;
		b++;
		i3++;
	}
	return (dec);
}
