#include <stdlib.h>
#include <stdio.h>

/**
 * main - power of a number
 * @agrc: first number of values
 * @argv: pointer to values
 *
 * Return: the power of base number
 */

int main(int argc, char* argv[])
{
	long int x, y, prod = 1;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	while (y > 0)
	{
		prod *= x;
		y--;
	}
	printf("%ld\n", prod);

	return (0);
}
