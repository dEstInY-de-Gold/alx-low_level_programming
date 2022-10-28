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
	int prod, cons;

	prod = 0;
	cons = y
	while (y > 0)
	{
		if (y == cons)
			prod = x*x;
		else
			prod += prod*x;
		y--;
	}
	return (prod);
}
