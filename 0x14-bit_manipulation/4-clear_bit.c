#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a specific index in an unsigned long integer.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
