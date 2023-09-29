#include "main.h"

/**
 * main - Multiplies two numbers and prints the result.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;
	int i, negative = 0;

	if (argc != 3)
	{
		for (i = 0; "Error\n"[i]; i++)
		{
			_putchar("Error\n"[i]);
		}
		return (1);
	}

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][0] == '-')
		{
			negative = 1;
			continue;
		}
		num1 = num1 * 10 + (argv[1][i] - '0');
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][0] == '-')
		{
			negative = !negative;
			continue;
		}
		num2 = num2 * 10 + (argv[2][i] - '0');
	}

	result = num1 * num2;

	if (negative)
	{
		_putchar('-');
	}

	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		int divisor = 1000000000;  // Max int value has 10 digits
		int leadingZero = 1;       // Flag to skip leading zeros

		while (divisor > 0)
		{
			int digit = (result / divisor) % 10;
			if (digit != 0 || !leadingZero)
			{
				_putchar(digit + '0');
				leadingZero = 0;
			}
			divisor /= 10;
		}
	}

	_putchar('\n');

	return (0);
}
