#include "search_algos.h"

/**
 * exponential_search - search algorithm
 * @array: input data to search from
 * @size: size of input
 * @value: item to search for
 *
 * Returns: the location of value in array or an error
 */
int binary_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (!(array))
		return(-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		bound *= 2;
	}
	return (binary_search(&array[bound/2], min(bound+1, size), value));
}

/**
 * binary_search - A binary search algorithm.
 * @array: Apointer to 1st item of an array
 * @size: Number items in array.
 * @value: The item to search for.
 *
 * Return: The index of first match, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int rptr, lptr, m, i;

	lptr = 0;
	rptr = (int)size - 1;
	while (lptr <= rptr)
	{
		printf("Searching in array: ");

		for (i = lptr; i < rptr; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		m = (rptr + lptr) / 2;
		if (array[m] < value)
			lptr = m + 1;
		else if (array[m] > value)
			rptr = m - 1;
		else
			return (m);
	}

	return (-1);
}
