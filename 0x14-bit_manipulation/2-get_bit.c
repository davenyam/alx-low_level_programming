#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index in an unsigned long integer.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}
