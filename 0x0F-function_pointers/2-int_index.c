#include "function_pointers.h"

/**
 * int_index - seaches for an integer.
 * @array: given array of elements
 * @size: size of array
 * @cmp: the referenced function
 *
 * Return: first index of matched integer in array.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size < 1)
			return (-1);
		for (; n < size; n++)
		{
			if ((*cmp)(array[n]) == 1)
				return (n);
		}
	}
	return (-1);
}
