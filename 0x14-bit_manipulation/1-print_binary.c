#include "main.h"

/**
 * print_binary - print numners in binary form
 * @n: number to be converted
 */

void print_binary(unsigned int n)
{
	unsigned int lp = 32768;

	if (n == 0)
	{
		printf("%d", 0);
	}
	else
	{
		while (lp > 0)
		{
			if ((lp & n) == 0)
			{
				if ((lp >> 1) < (n >> 1))
					printf("%d", 0);
			}
			else
				printf("%d", 1);
			lp = lp >> 1;
		}
	}
}
