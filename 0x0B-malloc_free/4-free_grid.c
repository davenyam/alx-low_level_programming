#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a two-dimensional grid of integers.
 * @grid: The grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * This function frees the memory allocated for a two-dimensional grid of
 * integers, including both the grid itself and its rows.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
