#include "main.h"

/**
 * _pow_recursion - prints power of a number to stdout
 * @x: number
 * @y: exponent
 *
 * Return: x**y
 */

int _pow_recursion(int x, int y)
{
	int pow = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	y--;
	pow += x * _pow_recursion(x, y);

	return (pow);
}
