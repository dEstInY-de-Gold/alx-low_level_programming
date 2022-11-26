#include <stdio.h>

/**
 * main - prints its own name to stdout
 * @argc: number os arrays in argv
 * @argv: an array of strings
 *
 * Return: zero
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
