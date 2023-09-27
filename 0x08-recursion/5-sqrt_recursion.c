#include "main.h"

/**
 * check_int - checks integer as a candidate for a square root
 *
 * @square: square integer
 * @x: integer
 *
 * Return: square root if found, -1 if not found
 */
int isInt(int square, int x);

/**
 * _sqrt_recursion - returns the natural square root of n
 *
 * @n: the integer for which the square root is to be found
 *
 * Return: the square root of n if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (isInt(n, start));
}

/**
 * check_int - checks integer as a candidate for a square root
 *
 * @square: square integer
 * @x: integer
 *
 * Return: square root if found, -1 if not found
 */
int isInt(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (isInt(square, x - 1));
	else if (x < square / x)
		return (isInt(square, x + 1));
	else
		return (-1);
}
