#include "main.h"

/**
 * _strspn - to get length of a prefixed string
 * @s: main string
 * @accept: substring
 *
 * Return: number of bytes in s consisting of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	z = 0;
	for (x = 0; s[x] != ' '; x++)
	{
		for (y = 0; accept[y] !=  0; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				z++;
			}
		}
	}
	return (z);
}
