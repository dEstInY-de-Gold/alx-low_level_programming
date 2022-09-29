#include "main.h"

/**
 * factorial - prints factorial of a number to stdout
 * @n: number as input
 *
 * Return: factorial of n if n is positive
 * otherwise, -1
 */

int factorial(int n)
{
	int factn = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	factn += n * factorial(n - 1);
	return (factn);
}
