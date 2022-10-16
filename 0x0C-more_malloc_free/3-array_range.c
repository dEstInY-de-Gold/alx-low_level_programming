#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an arrays of integers
 * @min: minimum range
 * @max: maximum range
 *
 * Return: pointer to the created array
 */

int *array_range(int min, int max)
{
	int i, n = 0, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 2);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(ptr + n) = i;
		n++;
	}
	return (ptr);
}
