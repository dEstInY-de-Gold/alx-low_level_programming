#include <stdio.h>

/**
 * main - prints sum multiples of 3, 5, 6 and 9
 *
 * Return: zero
 */

int main(void)
{
	int sum = 0, num = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
		num++;
	}
	printf("%d\n", sum);

	return (0);
}
