#include "main.h"

/**
 * factorial - returns the factorial of n
 *
 * @n: int value
 * Return: Returns the factorial when n >= 0, or -1 for negative values.
 */
int factorial(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    else if (n == 0)
    {
        return (1);
    }
    else
    {
        return (n * factorial(n - 1));
    }
}
