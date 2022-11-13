#include <stdio.h>

/**
 * main - prints combo 5 to stdout
 *
 * Return: Zero again.
 */

int main(void)
{
	int i = 0, j;

	while (i < 99)
	{
		j = 0;
		while (j < 100)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			if ((j % 10 == 0) && (i >= j))
			{
				j += i + 1;
			}
			if (j < 100)
			{
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}
			if (!((i == 98) && (j == 99)))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
