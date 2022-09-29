#include "main.h"

/**
 * _number - prints power of a number to stdout
 * @k: number
 * @x: squareroot
 *
 * Return: x
 */

int _number(int k, int x)
{
	if ((x * x) == k)
	{
		return (x);
	}
	else if ((x * x) > k)
	{
		return (-1);
	}
	return (_number(k, x + 1));
}

/**
 * _sqrt_recursion - calculates squareroot of a number.
 * @n: number to return sqrt on.
 *
 * Return: sqrt of n.
 */

int _sqrt_recursion(int n)
{
	return (_number(n, 1));
}
