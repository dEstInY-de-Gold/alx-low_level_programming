#include <stdio.h>

/**
 * main - print sum of even valued fibs
 *
 * Return: 0
 */

int main(void)
{
	long int fib1 = 1, fib2 = 2, i = 0, sum = 0, tmp;

	while (i <= 4000000)
	{
		if (fib2 % 2 == 0)
			sum += fib2;
		tmp = fib2;
		fib2 += fib1;
		fib1 = tmp;
		i++;
	}
	printf("%li\n", sum);

	return (0);
}
