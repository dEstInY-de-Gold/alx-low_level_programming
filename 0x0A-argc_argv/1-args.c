#include <stdio.h>

/**
 * main - prints the number of arguments.
 *
 * @argc: number of argv values.
 * @argv: array of strings.
 *
 * Return: 0.
 */

int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
