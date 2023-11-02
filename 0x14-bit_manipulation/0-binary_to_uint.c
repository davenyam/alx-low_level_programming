#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: A pointer to the binary string.
 *
 * Return: The unsigned integer converted from the binary string.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		j = 2 * j + (b[i] - '0');
	}

	return (j);
}
