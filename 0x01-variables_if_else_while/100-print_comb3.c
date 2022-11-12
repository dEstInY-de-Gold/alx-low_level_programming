#include <stdio.h>

/**
 * main - prints combo 3
 *
 * Return: 0.
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if ((i % 10) == 0)
		{
			i += (i / 10 + 1);
		}
		if (i < 90)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i < 80)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (i > 90)
		{
				putchar('\n');
		}
		i++;
	}
	return (0);
}
