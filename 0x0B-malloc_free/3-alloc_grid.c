#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a pointer to a two dimensional array of strings
 * @width: length of rectangular shaped array
 * @height: height of rectangular shaped array
 *
 * Return: a pointer to 2d array.
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **pointer;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(sizeof(int *) * height);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pointer[i] = malloc(sizeof(int) * width);
		if (pointer[i] == NULL)
		{
			free(pointer);
			for (j = 0; j < width; j++)
				free(pointer[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	}
	return (pointer);
}
