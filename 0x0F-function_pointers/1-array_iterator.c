#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A pointer to a function of arrays
 * @array: the given array
 * @size: size of array
 * @action: the pointer in reference
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n = 0;

	if (array != NULL && action != NULL)
	{
		for (; n < size; n++)
			(*action)(array[n]);
	}
	else
		return;
}
