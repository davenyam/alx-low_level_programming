#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: No return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list j;
	unsigned int i;

	va_start(j, n);

	for (i = 0; i < n; i++)
    {
		printf("%d", va_arg(j, int));

		if (separator != NULL && i < n - 1)
        {
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(j);
}