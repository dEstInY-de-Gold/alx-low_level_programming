#include <stdio.h>

/**
 * main - prints combo 4.
 *
 * Return: 0.
 */

int main(void)
{
	int i = 10, cnt;

	while (i < 1000)
	{
		if (i < 100 && i % 10 == 0)
			i += i / 10 + 1;
		if ((i > 99) && (i % 10 == 0))
		{
			if ((i % 100) == 0)
			{
				cnt = (i / 100 + 2) + (i / 10);
				i += cnt + 10;
			}
			else
			{
				if (i % 100 == 90)
				{
					i += 10;
					continue;
				}
				else
					i += ((i % 100) / 10) + 1;
			}
		}
		if (i <= 789)
		{
			putchar(i / 100 + '0');
			putchar(((i % 100) / 10) + '0');
			putchar(((i % 100) % 10) + '0');
			if (i != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
