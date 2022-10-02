#include <stdio.h>

/**
 * main - prints its own name to stdout
 * @argc: number os arrays in argv
 * @argv: an array of strings
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
