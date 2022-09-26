#include "main.h"

/**
 * times_table - multiplication table from 0 through 9
 */

void times_table(void)
{
	int x, y, n, s, t;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			n = x * y;
			s = n % 10;
			t = (n - s) / 10;
			if (y > 0)
			{
				_putchar(' ');
				(t <= 0) ? _putchar(' ') : _putchar(t + '0');
			}
			_putchar(s + '0');
			if (y < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
