#include "main.h"
#include <stdio.h>

/**
 * print_times_table - a multiplication table from 1-15
 * @n: number for the multiplication table
 */

void print_times_table(int n)
{
	int x, y, t;

	if ((n >= 0) && (n <= 15))
		for (x = 0; x <= n; x++)
		{
			for(y = 0; y <= n; y++)
			{
				t = x * y;
				if (t < 10)
					printf("%d,   ", t);
				else if (t < 100)
					printf("%d,  ", t);
				else if (t < 1000)
					printf("%d, ", t);
				else if (t >= 1000)
					printf("%d", t);
				else
					printf("%d", t);
			}
			_putchar('\n');
		}
}
