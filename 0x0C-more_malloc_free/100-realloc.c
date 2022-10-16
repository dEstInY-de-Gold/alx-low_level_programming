#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a block of memory
 * @ptr: a pointer to previous memory
 * @old_size: allocated size of ptr
 * @new_size: size for new memory
 *
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_cpy, *copy;
	void *nptr;
	unsigned int n;/* np0 = old_size / sizeof(unsigned int); */

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr_cpy = ptr;
	nptr = malloc(sizeof(*ptr_cpy) * new_size);
	if (nptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	copy = nptr;
	for (n = 0; n < old_size && n < new_size; n++)
		copy[n] = *ptr_cpy++;
	free(ptr);
	return (nptr);
}
