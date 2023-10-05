#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate and initialize memory for an array of elements.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory block, or NULL if memory
 *         allocation fails or if @nmemb or @size is zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;
	char *j;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(size * nmemb);

	if (i == NULL)
		return (NULL);

	j = i;

	for (k = 0; k < (size * nmemb); k++)
		j[k] = '\0';

	return (i);
}
