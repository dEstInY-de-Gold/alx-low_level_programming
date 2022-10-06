#include <stdio.h>
#include <string.h>

/**
 * main - this returns the amount of bytes to store a data type variable in c
 *
 * Return: one.
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %ld byte(S)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
