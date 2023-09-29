#include "main.h"
#include <stdbool.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: string input parameter
 *
 * Return: converted integer from string
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

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
		_putchar('0');
		_putchar('\n');
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
					_putchar(*error_message);
					error_message++;
				}
				return 1;
			}

			result += _atoi(argv[i]);
		}

		divisor = 1;
		while (divisor <= result / 10)
		{
			divisor *= 10;
		}

		while (divisor > 0)
		{
			int digit = (result / divisor) % 10;
			_putchar('0' + digit);
			divisor /= 10;
		}

		_putchar('\n');
	}

	return (0);
}
