#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmem: contents of the array
 * @size: number array members
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmem, unsigned int size)
{
	char *ptr;
	unsigned int n;

	if (nmem == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmem * size);
	if (ptr == NULL)
		return (NULL);
	for (n = 0; n < (nmem * size); n++)
		*(ptr + n) = 0;

	return (ptr);
}
