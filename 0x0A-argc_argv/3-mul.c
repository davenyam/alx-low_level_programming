#include "main.h"

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
 * main - Multiplies two numbers and prints the result.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	int num1 = _atoi(argv[1]), num2 = _atoi(argv[2]), result;

	result = num1 * num2;
	if (result < 0)
	{
		_putchar('-');
		result = -result;
	}
	if (result == 0)
	{
		_putchar('0');
	}
	else
	{
		int divisor = 1;

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
	}
	_putchar('\n');
	return (0);
}
