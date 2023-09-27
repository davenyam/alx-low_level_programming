#include "main.h"

/**
 * factorial - returns the factorial of n
 *
 * @n: int value
 * Return: Returns the factorial when n > 0
 */

int factorial(int n)
{
	if (n > 0)
	{
		n = (n * factorial((n - 1)));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
