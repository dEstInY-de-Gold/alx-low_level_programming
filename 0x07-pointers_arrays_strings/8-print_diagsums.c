#include "main.h"
#include <stdio.h>
/**
 * print_diagsum - prints sum diagonals in 2x2 array to stdout
 * @a: given 2d array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int x, sumx = 0, sumy = 0;

	for (x = 0; x < size; x++)
	{
		sumx += a[(size + 1) * x];
		sumy += a[(size - 1) * (x + 1)];
	}
	printf("%d, %d\n", sumx, sumy);
}
