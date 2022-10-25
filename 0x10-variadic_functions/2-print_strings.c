#include "variadic_functions.h"

/**
 * print_strings - prints a string to stdout
 * @seperator: acts as named
 * @n: number of parameters
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	seperator = (seperator == NULL) ? seperator : "";

	va_start(list, n);
	i = 0;
	while (i < n)
	{
		if (i > 0 && (i < (n - 1)))
			printf("%s", seperator);
		if (va_arg(list, char *) == NULL)
		{
			printf("(nil)");
			if (i == n - 1)
				printf("\n");
		}
		else
		{
			printf("%s", va_arg(list, char *));
			if (i == n - 1)
				printf("\n");
		}
		i++;
	}
	va_end(list);
}
