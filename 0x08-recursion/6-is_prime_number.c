#include "main.h"

/**
 * prime_checker - checks for prime number.
 * @a: number.
 * @b: factor of a.
 *
 * Return: prime {1} or not prime{0}.
 */

int prime_checker(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_checker(a, b + 1));
}

/**
 * is_prime_number - determines if number is prime or not
 * @n: the given number
 *
 * Return: 1 if is prime or 0 otherwise
 */

int is_prime_number(int n)
{
	return (n <= 1 ? 0 : prime_checker(n, 2));
}
