#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two ints
 *
 * @argc: number of inputs
 * @argv: array of input
 *
 * Return: 0.
 */

int main(int argc,char *argv[])
{
	int res;

	if (argc != 3)
		printf("Error\n");
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}
