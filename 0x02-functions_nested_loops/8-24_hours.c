#include "main.h"

/**
 * jack_bauer - prints minutes of the day
 */

void jack_bauer(void)
{
	int hrs, min;
	int min1, min2;
	int hrs1, hrs2;

	for (hrs = 0; hrs < 24; hrs++)
	{
		hrs1 = hrs / 10;
		hrs2 = hrs % 10;
		for (min = 0; min < 60; min++)
		{
			min1 = min / 10;
			min2 = min % 10;
			_putchar(hrs1 + '0');
			_putchar(hrs2 + '0');
			_putchar(':');
			_putchar(min1 + '0');
			_putchar(min2 + '0');
			_putchar('\n');
		}
		min = 0;
	}
}
