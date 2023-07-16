#include "search_algos.h"

/**
  * jump_search - The jump search algorithm.
  * @array: An array to search from
  * @size: The length of the array
  * @value: The target to search for.
  *
  * Return: The index of target, or, -1 if not found.
  */

int jump_search(int *array, size_t size, int value)
{
	int prev, step, b_size;

	prev = 0;
	b_size = sqrt((int)size);
	step = b_size;

	/* printf("%d\n", b_size); */
	while (array[(int)fmin(prev, (int)size - 1)] <= value)
	{
		/* printf("%d\n", array[(int)fmin(step, (int)size) - 1]); */
		/* for (i = prev; i <= step; i++) */
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		/* if ((value >= array[prev]) && (value <= array[(int)size - 1])) */
		if ((value >= array[prev]) && ((value <= array[step])
					|| (step >= (int)size)))
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, step);
			while (array[prev] <= value)
			{
				printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
				if (prev >= (int)size)
					return (-1);
				if (array[prev] == value)
					return (prev);
				else if (array[(int)size - 1] < value)
					return (-1);
				prev += 1;
			}
		}
		prev = step;
		step += b_size;
	}
	return (-1);
}
