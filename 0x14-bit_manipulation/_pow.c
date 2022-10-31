#include "main.h"

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
