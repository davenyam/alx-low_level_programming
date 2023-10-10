#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to a struct dog.
 *
 * Description: This function prints the name, age, and owner of the dog.
 * If any of the dog's fields are NULL, it is indicated as (nil).
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
