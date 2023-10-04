#include "main.h"
#ifndef NULL
#define NULL ((void *)0)
#endif
/*
 * create_array - Creates an array of characters and initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created and initialized array or NULL if size is 0 or if memory allocation fails.
 */

char *create_array(unsigned int size, char c)
{
	char* x;
	unsigned int i;

	if (size == 0)
		return (NULL);

	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		x[i] = c;

	return (x);
}
