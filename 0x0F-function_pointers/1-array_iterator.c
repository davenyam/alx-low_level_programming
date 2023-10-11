#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array.
 * @array: Pointer to an array of integers.
 * @size: The size of the array.
 * @action: A function pointer that specifies the action.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
