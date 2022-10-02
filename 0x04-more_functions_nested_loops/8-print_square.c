#include "main.h"

/**
 * print_square - prints a square to stdout
 * @size: size of square
 */

void print_square(int size)
{
	int b, l;

	for (b = 0; b < size; b++)
	{
		for (l = 0; l < size; l++)
			_putchar('#');
		_putchar('\n');
	}
}
