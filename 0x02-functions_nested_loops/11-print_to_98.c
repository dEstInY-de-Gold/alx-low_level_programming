#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints upto 98
 * @n: starting point
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
			printf("%d", n);
		else
			printf("%d, ", n);
		n++;
	}
	printf("\n");
}
