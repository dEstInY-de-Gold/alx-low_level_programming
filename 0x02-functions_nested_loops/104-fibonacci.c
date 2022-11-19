#include <stdio.h>

/**
 * main - prints the first 98 fibs
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, i = 0, tmp;

	while (i < 98)
	{
		if (i == 0)
		{
			printf("%lu, %lu, ", fib1, fib2);
			i += 1;
		}
		else if (i < 97)
			printf("%lu, ", fib2);
		else
			printf("%lu", fib2);
		tmp = fib2;
		fib2 += fib1;
		fib1 = tmp;
		i++;
	}
	printf("\n");

	return (0);
}
