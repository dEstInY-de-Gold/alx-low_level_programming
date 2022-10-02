#include "main.h"
 /**
  * more_numbers - prints 0 to 14 to stdout ten times
  */

void more_numbers(void)
{
	int i, c, n;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c < 15; c++)
			if (c >= 10)
			{
				n = (c / 10) + (c % 10);
				_putchar(n + '0');
			}
			else
				_putchar(c + '0');
		_putchar('\n');
	}
	return;
}
