#include "main.h"

/**
 * print_last_digit - calculates the last digit of n
 * @n: integer type number
 * Return: Always returns @lastDigit
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else if (n > 0)
	{
		lastDigit = n % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = 0;
		_putchar(lastDigit + '0'7-print_last_digit.c);
		return (lastDigit);
	}
}
