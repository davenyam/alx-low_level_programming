#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all parameters.
 * @n: The number of arguments.
 *
 * Return: The sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	unsigned int i;
	int j = 0;

	if (n == 0)
		return (0);

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		j += va_arg(k, int);
	}

	va_end(k);

	return (j);
}
