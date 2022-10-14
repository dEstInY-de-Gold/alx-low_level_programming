#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints input numbers to stdout
 * @seperator: acts as named
 * @n: number of parameters to function
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	seperator = (seperator != NULL) ? seperator : "";

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf("%s", seperator);
		printf("%d", va_arg(num, int));
		if (i == n - 1)
			printf("\n");
	}
	va_end(num);
}
