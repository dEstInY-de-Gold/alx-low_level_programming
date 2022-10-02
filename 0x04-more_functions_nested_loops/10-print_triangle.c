#include "main.h"

/**
 * print_triangle - prints a triangle to stdout
 *
 * @size: Height and length of the triangle
 */

void print_triangle(int size)
{
	int i, n, h;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (n = size - 1; n > i; n--)
				_putchar(32);
			for (h = 0; h <= i; h++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
