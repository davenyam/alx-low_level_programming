#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 * Description: This function prints the numbers from 0 to 14, ten times,
 * with each set of numbers separated by a newline character.
 */
void more_numbers(void)
{
	int a;
	int num;

	for (a = 1; a <= 10; a++)
	{
		for (num = 0; num <= 14; num++)
		{
			if(num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
