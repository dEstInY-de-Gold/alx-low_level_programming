/* #include "main.h" */
#include <stdio.h>
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

	cons = y;
	while (y > 0)
	{
		if (y == cons)
		{
			prod = x*x;
			y--;
		}
		else
			prod *= x;
		y--;
	}
	return (prod);
}

int main(void)
{
	int n;
	n = _pow(2, 7);
	printf("%d\n", n);
	return (0);
}
