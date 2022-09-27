#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the given string
 * @c: the character to locate
 *
 * Return: location of first occurence of character
 */

char *_strchr(char *s, char c)
{
	int x, y;

	x = 0;
	while (s[x])
		x++;

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}
	return ('\0');
}
