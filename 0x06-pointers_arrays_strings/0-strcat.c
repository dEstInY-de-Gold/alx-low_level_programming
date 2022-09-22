#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string to append to
 * @src: the source string to append from
 *
 * Return: returns dest string
 */


char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
