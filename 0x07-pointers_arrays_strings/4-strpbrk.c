#include "main.h"

/**
 * _strpbrk - searches for a match in main string using sub-string
 * @s: the main string
 * @accept: substring
 *
 * Return: a pointer to matched location in string
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; *(accept + x) != 0; x++)
		{
			if (*s == *(accept + x))
				return (s);
		}
		s++;
	}
	return (0);
}
