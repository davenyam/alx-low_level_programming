#include "variadic_functions.h"

/**
 * print_all - Prints values of various types based on the format string.
 * @format: A string containing format specifiers.
 *
 * Description: This function accepts a format string and a variable number of
 * arguments of different types (char, int, double, or string) and prints the
 * values based on the format specifiers.
 */
void print_all(const char *const format, ...)
{
	va_list k;
	unsigned int i = 0, j, c = 0;
	char *l;
	const char m[] = "cifs";

	va_start(k, format);

	while (format && format[i])
	{
		j = 0;

		while (m[j])
		{
			if (format[i] == m[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(k, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(k, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(k, double)), c = 1;
			break;
		case 's':
			l = va_arg(k, char *), c = 1;

			if (!l)
			{
				printf("(nil)");
				break;
			}

			printf("%s", l);
			break;
		}
		i++;
	}

	printf("\n");
	va_end(k);
}
