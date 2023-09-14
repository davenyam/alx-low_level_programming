#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except for 2 and 4
 * Description: This function prints the numbers from 0 to 9, excluding 2 and 4,
 * followed by a newline character.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; (a <= 9 && a != 2 && a != 4); a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
