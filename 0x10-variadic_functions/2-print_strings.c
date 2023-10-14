#include "variadic_functions.h"

/**
 * print_strings - Prints strings separated by a separator.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 *
 * Return: No return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list j;
	unsigned int i;
	char *k;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		k = va_arg(j, char *);

		if (k)
			printf("%s", k);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(j);
}