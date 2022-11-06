#include <stdio.h>

int _strlen(char *str)
{
	int cnt;

	while(*str)
	{
		cnt += 1;
		str++;
	}
	return (cnt);
}
