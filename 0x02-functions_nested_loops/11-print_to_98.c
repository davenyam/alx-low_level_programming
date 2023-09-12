#include "main.h"

/**
 * print_to_98 - prints numbers between zero and 98
 * @n: int type number
 * Return: 0
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
