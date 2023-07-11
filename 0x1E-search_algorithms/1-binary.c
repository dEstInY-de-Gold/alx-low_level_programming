#include "search_algos.h"

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
	int div, divarr, *ptr, i;

	div = (int)size;
	divarr = ((int)size/2);
	if (!(array))
		return (-1);
	if (value == array[divarr])
		return (divarr);
	if (div < 1)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < div; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	if (value > array[divarr])
	{
		div = (int)size/2;
		divarr += divarr/2;
		ptr = &array[divarr];
		printf("div: %d. divarr: %d\n", div, divarr);
		binary_search(ptr, (size_t)div, value);
	}
	else if (value < array[divarr])
	{
		div = (int)size/2;
		divarr -= divarr/2;
		ptr = &array[0];
		printf("div: %d. divarr: %d\n", div, divarr);	
		binary_search(ptr, (size_t)div, value);
	}

	return (-1);
}
