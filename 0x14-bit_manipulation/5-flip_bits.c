#include "main.h"

/**
 * flip_bits - Counts the number of bits that need to be flipped to change one
 *             unsigned long integer to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits that must be flipped to change n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int k;
	unsigned long int l = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		k = l >> i;
		if (k & 1)
			j++;
	}

	return (j);
}
