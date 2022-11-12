#include <stdio.h>

/**
 * main - prints combo 4.
 *
 * Return: 0.
 */

int main(void)
{
	int i = 10, n1, n2, ctr;

	while (i < 1000)
	{
		if ((i < 100) && (i % 10) == 0)
			i += (i / 10 + 1);
		if ((i >= 100) && (i % 10) == 0)
		{
			ctr = i / 10;
			i += (ctr / 10 + 12);
		}
		if (i < 900)
		{
			putchar(i / 100 + '0');
			n1 = i % 100;
			putchar(n1 / 10 + '0');
			n2 = n1 % 10;
			putchar(n2 % 10 + '0');
			if (i < 800)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (i > 800)
			putchar('\n');
		i++;
	}
	return (0);
}
