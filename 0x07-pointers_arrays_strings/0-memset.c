#include "main.h"

/**
 * _memset - fills memory with a constant
 * @s: pointer to memory
 * @b: constant byte
 * @n: first byte of memory to be filled
 *
 * Return: character set of filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
