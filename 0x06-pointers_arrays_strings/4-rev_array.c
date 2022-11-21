#include "main.h"

/**
 * reverse_array - reverse a string
 * @a: input string
 * @n: lengthof input string
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int b = 0;
	int nn;

	nn = n / 2;
	while (((n - 1) >= 0) && (b < nn - 1))
	{
		tmp = a[b];
		a[b] = a[n - 1];
		a[n - 1] = tmp;
		n--;
		b++;
	}
}
