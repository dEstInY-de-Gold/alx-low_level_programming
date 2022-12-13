#include "main.h"

/**
 * _strncat - concats src with n bytes to dest
 * @dest: destination file
 * @src: source file
 * @n: buffer size
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len])
	{
		dest_len++;
		if (dest[dest_len] == 0)
			break;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
