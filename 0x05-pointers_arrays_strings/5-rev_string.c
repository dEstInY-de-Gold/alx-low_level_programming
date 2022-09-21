#include "main.h"

/**
 * rev_string - reverse the input string argument
 * 
 * @s: input argument
 */

void rev_string(char *s)
{
	int tmp;
	int len;
	int a;
	int b;

	len = 0;
	b = 0;

	while (s[len] != '\0')
		len++;

	a = len-1;
	len = len/2;
	while (len--)
	{
		tmp = s[b];
		s[b] = s[a];
		s[a] = tmp;
		b++;
		a--;
	}
}
