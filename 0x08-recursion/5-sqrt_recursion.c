#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to find the square root of
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function to calculate square root recursively
 *
 * @n: the number to find the square root of
 * @x: the current value to check as a possible square root
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, x + 1));
	}
}
