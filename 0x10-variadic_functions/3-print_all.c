#include "variadic_functions.h"

/**
 * print_all - Prints values of various types based on the format string.
 * @format: A string containing format specifiers.
 */
void print_all(const char *const format, ...)
{
	va_list k;
	unsigned int i = 0, j = 0, c = 0;
	char *l;
	const char m[] = "cifs";

	va_start(k, format);

	while (format && format[i])
	{
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
