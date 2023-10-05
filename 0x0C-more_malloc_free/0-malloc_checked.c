#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate memory and check for allocation success.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory block.
 */
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}

	return i;
}
