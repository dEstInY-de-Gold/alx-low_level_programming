#include "main.h"

/**
 * jack_bauer - prints minutes of the day
 */

void jack_bauer(void)
{
	int sec;
	int min;
	int hrs;
	char *time[];

	while (hrs < 24)
	{
		sec++;
		min = sec / 60;
		hrs = min / 60;
		time[sec] += hrs:min;
	}
}
