#include "main.h"

/**
 * print_square - Prints a square made of '#' characters
 * @size: The size of the square
 *
 * Description: This function prints a square of '#' characters with each side
 * having a length of 'size', followed by a newline character ('\n').
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

