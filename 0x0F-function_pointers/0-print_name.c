#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: A function pointer that specifies how to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
