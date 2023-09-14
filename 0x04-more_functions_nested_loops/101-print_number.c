#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	int divisor = 1;
	int digit;
	int leading_zeros = 1;
	
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	
	while (divisor > 0)
	{
		digit = n / divisor;
		n %= divisor;
		divisor /= 10;
		
		if (digit != 0 || !leading_zeros)
		{
			_putchar(digit + '0');
			leading_zeros = 0;
		}
	}
}
