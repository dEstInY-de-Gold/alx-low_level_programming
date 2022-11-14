#include <stdio.h>

/**
 * main - prints fibonacci numbers to stdout
 *
 * Return: 0
 */

int main(void)
{
	long int fib1 = 1, fib2 = 2, i = 0, tmp;

	while (i <= 50)
	{
		if (i == 0)
		{
			printf("%li, ", fib1);
			printf("%li, ", fib2);
			i += 2;
		}
		else if (i <= 49)
			printf("%li, ", fib2);
		else
			printf("%li\n", fib2);
		tmp = fib2;
		fib2 += fib1;
		fib1 = tmp;
		i++;
	}
	return (0);
}
