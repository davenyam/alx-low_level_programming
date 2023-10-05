#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers within a specified range.
 * @min: The minimum value (inclusive) for the array.
 * @max: The maximum value (inclusive) for the array.
 * 
 * Return: A pointer to the allocated array, or NULL if memory allocation fails
 *         or if @min is greater than @max.
 */
int *array_range(int min, int max)
{
	int *i, j, k;

	if (min > max)
		return (NULL);

	k = max - min + 1;

	i = malloc(sizeof(int) * k);

	if (i == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
		i[j] = min++;

	return (i);
}
