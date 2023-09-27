#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 * check_int - checks integer as candidate for square root
 * @square: square integer
 * @n: integer
 * @x: integer
 * Return: square root and 1
 */
int check_int(int square, int x);
int _sqrt_recursion(int n)
{
	int start;

	start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_int(n, start));
}

int check_int(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (check_int(square, x - 1));
	else if (x < square / x)
		return (check_int(square, x + 1));
	else
		return (-1);
}
