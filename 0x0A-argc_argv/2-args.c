#include <stdio.h>

/**
 * main - prints its arguments to stdout
 *
 * @argc: number of arguments
 * @argv: an array of strings
 *
 * Return: 0.
 */


int main(int argc,char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
