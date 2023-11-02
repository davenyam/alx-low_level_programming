#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be printed in binary.
 *
 * Return: void (no return value)
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int k;

	for (i = 63; i >= 0; i--)
	{
		k = n >> i;

		if (k & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
