#include <stddef.h>
#include <stdio.h>

/**
 * interpolation_search - The search function.
 * @array: Input data for search
 * @size: The size of input
 * @value: Item to be searched
 *
 * Return: Value if found or -1 if failed
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, value);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return ((int)pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
