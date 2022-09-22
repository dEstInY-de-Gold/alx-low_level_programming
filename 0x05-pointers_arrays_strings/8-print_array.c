#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of a given array of integers
 *
 * @a: pointer of integer array
 * @n: number of arrays
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		for (; i < n; i++)
		{
			if (i <= (n - 2))
				printf("%d, ", a[i]);

			else
				printf("%d\n", a[i]);
		}
	}
	else
		printf("\n");
}
