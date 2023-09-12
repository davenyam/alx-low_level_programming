#include "main.h"
/**
 * print_sign - print sign and number.
 * @n: value of the number.
 * Return: return 1 for positive, 0 for zero or otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
