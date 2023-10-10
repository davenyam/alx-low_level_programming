#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a structure for a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure represents a dog with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to a struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to a struct dog.
 *
 * Description: This function prints the name, age, and owner of the dog.
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog and allocates memory for it.
 * @name: Name of the new dog.
 * @age: Age of the new dog.
 * @owner: Owner of the new dog.
 *
 * Return: Pointer to a new dog structure.
 *         NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to a struct dog.
 *
 * Description: This function frees the memory used by a dog structure.
 */
void free_dog(dog_t *d);

#endif /* DOG_H */

