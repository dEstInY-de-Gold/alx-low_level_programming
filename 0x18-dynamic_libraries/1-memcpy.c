#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination for copied memory
 * @src: source of copied copied memory
 * @n: bufer size of copied memory
 * Return: memory address of destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while ((a <= 0) && (a < n))
	{
		*(dest + a) = *(src + a);
		a += 1;
	}
	return (dest);
}
