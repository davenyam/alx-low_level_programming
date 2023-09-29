#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_positive_number - Checks if a string represents a positive number.
 * @str: The input string to check.
 *
 * Return: true if the string is a positive number, false otherwise.
 */
bool is_positive_number(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return false;
		str++;
	}
	return (true);
}

/**
 * main - Adds positive numbers and prints the result.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int divisor;
	int i;

	if (argc == 1)
	{
		putchar('0');
		putchar('\n');
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!is_positive_number(argv[i]))
			{
				char *error_message = "Error\n";
				while (*error_message)
				{
					putchar(*error_message);
					error_message++;
				}
				return 1;
			}

			result += atoi(argv[i]);
		}

		divisor = 1;
		while (divisor <= result / 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			int digit = (result / divisor) % 10;
			putchar('0' + digit);
			divisor /= 10;
		}

		putchar('\n');
	}

	return (0);
}
