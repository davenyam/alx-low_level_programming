#include "main.h"

/**
 * swap_int - swaps the value of two ints
 *
 * @a: Pointer to the first int
 * @b: Pointer to the second int
 *
 * Description: takes the pointers of two ints and swaps the values
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
