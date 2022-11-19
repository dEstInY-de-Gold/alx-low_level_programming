#include "main.h"
#include <stdio.h>

/**
 * print_times_table - a multiplication table from 1-15
 * @n: number for the multiplication table
 */

void print_times_table(int n)
{
	int x, y, t, chk;

	if ((n >= 0) && (n <= 15))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				t = x * y;
				chk = (y + 1) * x;
				if (y < n)
				{
					printf("%i,", t);
					if (chk >= 100)
						printf(" ");
					else if (chk >= 10)
						printf("  ");
					else
						printf("   ");
				}
				else
					printf("%i\n", t);

			}
		}
	}
	else
		printf("\n");
}
