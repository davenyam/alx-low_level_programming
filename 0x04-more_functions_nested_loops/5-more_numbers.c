#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 * Description: This function prints the numbers from 0 to 14, ten times,
 * Return: Always void (Success)
 */
void more_numbers(void)
{
	int a, b;
	int num, row;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			a = num / 10;
			b = num % 10;
			if(num > 9)
				_putchar(a + '0');

			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
