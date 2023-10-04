#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a two-dimensional grid of integers.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A pointer to a newly allocated two-dimensional
 */
int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	x = malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		x[i] = malloc(sizeof(int) * width);

		if (x[i] == NULL)
		{
			for (; i >= 0; i--)
				free(x[i]);

			free(x);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			x[i][j] = 0;
	}

	return (x);
}
