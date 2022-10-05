#include "main.h"
#include <stdlib.h>

/**
 * free_grid - returns memory space previously used by alloc_grid file to sys
 * @grid: grid input file
 * @height: number of rows of the grid.
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == 0 || height == 0)
		return;
	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
