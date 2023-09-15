#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes
 * @n: The number of backslashes to print
 * Description: Function prints diagonal line consisting of 'n' backslashes
 * followed by a newline character ('\n').
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int spaces = 0;
		
		while (spaces < n)
		{
			int i = 0;
			
			while (i < spaces)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
			spaces++;
		}
	}
}
