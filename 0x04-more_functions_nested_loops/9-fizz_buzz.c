#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers to stdout
 *
 * with 3 n 5 replaced by 'fizz' or buzz.
 *
 * Return: zero.
 */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
