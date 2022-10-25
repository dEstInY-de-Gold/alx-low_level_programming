#include "main.h"

/**
 * _strncpy - copies string from src file to dest file
 * @dest: the destination for copied string
 * @src: the source of the copied string
 * @n: buffer size
 *
 * Return: the dest file
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
