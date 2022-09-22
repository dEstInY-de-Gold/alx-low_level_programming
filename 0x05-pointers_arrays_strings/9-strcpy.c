#include "main.h"

/**
 * _strcpy - copies a string to a destination file
 * @dest: the destination file for copied string
 * @src: the source of the string
 *
 * Return: returns dest value
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int srclen;

	i = 0;
	srclen = 0;

	while (src[srclen] != '\0')
		srclen++;

	for (; i < srclen; i++)
		dest[i] = src[i];
	dest[srclen] = '\0';

	return (dest);
}
