#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints added numbers to stdout
 *
 * @argc: number of inputs
 * @argv: array of inputs
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (isdigit(argv[num][i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (num = 1; num < argc; num++)
		sum += atoi(argv[num]);
	printf("%d\n", sum);
	return (0);
}
