#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * Description: This function prints the numbers from 0 to 9 followed by a
 * newline character.
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
