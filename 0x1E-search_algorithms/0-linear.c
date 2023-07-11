#include "search_algos.h"

/**
 * linear_search - A linear search algorithm
 * @array: A pointer to list of integers
 * @size: size of Arrays
 * @value: Value to search for
 *
 * Return: -1 on failure or the matched value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!(array))
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)(i));
	}
	return (-1);
}
