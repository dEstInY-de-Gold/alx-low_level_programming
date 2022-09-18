#include <stdio.h>

/**
 * main - prints all possible combinations of single digits
 *
 * Return: zero
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
