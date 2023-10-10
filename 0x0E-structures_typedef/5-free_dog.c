#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to a struct dog to be freed.
 *
 * Description: This function frees the memory allocated for a dog structure.
 * It also frees the memory allocated for the name and owner fields. If @d
 * is NULL, it does nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

