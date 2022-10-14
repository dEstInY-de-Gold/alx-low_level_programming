#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of input arguments to function
 * @n: number of input
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
