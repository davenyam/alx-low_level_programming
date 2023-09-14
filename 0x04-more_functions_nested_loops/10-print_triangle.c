#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle made of '#' characters
 * @size: The size of the triangle
 * Description: This function prints a right-angled triangle of '#' characters
 * with a base of 'size' and a height of 'size', followed by a newline character ('\n').
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, column;
		
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= row; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
