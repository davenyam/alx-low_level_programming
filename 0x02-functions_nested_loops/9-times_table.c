#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: 0
 */
void times_table(void)
{
	int x = 0;
	int a;
	int b;

	while (x < 10)
	{
		a = 0;
		while (a < 10)
		{
			b = x * a;

			if (b > 9)
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
			else if (a != 0)
			{
				_putchar(' ');
				_putchar(b + '0');
			}
			else
			{
				_putchar(b + '0');
			}

			if (a != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		a++;
		}
		_putchar('\n');
		x++;
	}
}
