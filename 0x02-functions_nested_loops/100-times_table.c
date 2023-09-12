#include "main.h"

/**
 * print_times_table - Print the `n` times table from 0.
 * Description: print nothing if 'n' is less tha 15
 * @n: int type number
 */
void print_times_table(int n)
{
	int x = 0, a, b;

	if (n > 15 || n < 0)
		return;
	while (x <= n)
	{
		for (a = 0; a <= n; a++)
		{
			b = x * a;
			if (b > 99)
			{
				_putchar(b / 100 + '0');
				_putchar((b / 10 % 10) + '0');
				_putchar(b % 10 + '0');
			}
			else if (b > 9)
			{
				_putchar(' ');
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
			else if (a != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(b + '0');
			}
			else
				_putchar(b + '0');

			if (a != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}
